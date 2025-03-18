#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that counts and displays the total number of regular files # SO I exclude hidden
and directories in the current directory and all its subdirectories.
INSTRUCTIONS
: <<'NOTE'
Exclude Hidden Directories
NOTE
ls -l | awk 'END {print NR}'