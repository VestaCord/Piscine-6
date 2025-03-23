#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that:
◦ Takes numbers from variables FT_NBR1, in ’\"?! base, and FT_NBR2, in mrdoc
base.
◦ Displays the sum of both in the gtaio luSnemf base.

Example 1:
FT_NBR1=\'?"\"'\
FT_NBR2=rcrdmddd
• The result is:
Salut
• Example 2 :
FT_NBR1=\"\"!\"\"!\"\"!\"\"!\"\"!\"\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
• The result is :
Segmentation fault
INSTRUCTIONS
: <<'NOTE'
Use `bc` utility (Basic Calculator)
    `scale` defines how some operations use digits after the d.p.
    `last` has the value of the last printed number
    `ibase` and `obase` define the conversion base for input and output numbers, defaulting to `10`

ERRATA: Right side quotation is most likely an errata, and should be taken to be aprostophe

Each Unicode Character corresponds to a number.
’\"?! is `base 5`
mrdoc is `base 5`
gtaio luSnemf is `base 13`

Therefore:
`ibase=5` as both input bases are the same, so no separate preprocessing needed
`obase=23` as `echo "obase=5; 13" | bc` returns `23`

Unicode Hex Translations (Unsure if helpful)
0x2019    ’   Right side quotation mark
0x0027    '    Aprostrophe
0x005C    \    Reverse solidus
0x0022    "    Quotation Mark
0x003F    ?    Question Mark
0x0021    !    Exclamation Mark

read
If no NAMEs are supplied, the line read is stored in the REPLY variable.
    -d delim    continue until the first character of DELIM is read, rather
        than newline
    -r  do not allow backslashes to escape any characters

cannot directly write base, even if escaped in shell, as `tr` escapes `\` as well
NOTE

# Comment Out This Section FT_NBR after testing
# read -r -d '' FT_NBR1 <<'EOF'; # Variable must be quoted to preserve \n
# \"\"!\"\"!\"\"!\"\"!\"\"!\"\"
# EOF
# FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo";

read -r -d '' BASE_NBR1 << 'EOF';
'\"?!
EOF
BASE_NBR2="mrdoc";
BASE_RESULT="gtaio luSnemf";
BASE_NBR1_TR=''\''\\"?!' # tr requires separate escape: '\'' :== '

# xarg to prepend `ibase` and `obase`
echo $FT_NBR1 + $FT_NBR2 | \
    tr "$BASE_NBR1_TR" '01234' | \
    tr "$BASE_NBR2" '01234' | \
    xargs echo "ibase=5; obase=23;" | bc | \
    tr '0123456789ABC' "$BASE_RESULT";