#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that processes the output of cat /etc/passwd with the
following modifications:
◦ Remove comments.
◦ Keep every other line, starting from the second line.
◦ Reverse each login name.
◦ Sort the results in reverse alphabetical order.
◦ Keep only logins between the environment variables FT_LINE1 and FT_LINE2
(inclusive).
◦ Join them in a single line, separated by ", ".
◦ End the output with a "."
INSTRUCTIONS
: <<'NOTE'
This is verlan for passwd
If testing, set $FT_LINE1= $FTLINE2=
        # Remove Comments
cat /etc/passwd | sed '/^\s*#/d' | sed 's/\s*#.*//' | \
        # Keep only logins between the environment variables FT_LINE1 and FT_LINE2
    awk -v LineStart="$FT_LINE1" -v LineEnd="$FT_LINE2" 'NR >= LineStart && NR <= LineEnd && NR%2==0' | \
        # Get Only Login Name
    awk -F: '{print $1;}' | \
        # Reverse Login Name
    rev | \
        # Sort Results in Reverse
    sort -r | \
        # End the output with a "."
    awk '{ print $0; }
        END { print "."; }'| \
        # Join them in a single line, separated by ", "
    tr "\n" "," | sed "s/,/, /g" | sed "s/, .,/.\n/g";

Can also use `cut -d: -f1` instead of awk -F: '{print $1;}'
Apparently instead of using awk for FT_LINE can use sed -n "${FT_LINE1},${FT_LINE2}p"
## About AWK
-F sepstring
juxtaposing two string expressions in awk means to concatenate them
A single print statement can make any number of newlines (Based on input)
To get shell variables: awk -v a="$var1" -v b="$var2" 'BEGIN {print a,b}'
For some reason awk substr start from 1 instead of 0
Can call system("echo "$0"|rev") in awk, but inefficient as many children
NOTE

FT_LINE1=7;
FT_LINE2=15;
cat /etc/passwd | sed '/^\s*#/d' | sed 's/\s*#.*//' | \
	awk 'NR%2==0' | \
    awk -F: '{print $1;}' | \
    rev | \
    sort -r | \
	awk -v LineStart="$FT_LINE1" -v LineEnd="$FT_LINE2" 'NR >= LineStart && NR <= LineEnd' | \
    tr "\n" "," | \
	sed "s/,/, /g" | \
	sed "s/, $/./g" | \
    cat -e;