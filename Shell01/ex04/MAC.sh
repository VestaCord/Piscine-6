#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that displays your machine’s MAC addresses, with each
address followed by a line break.
INSTRUCTIONS
: <<'NOTE'
This doesn't capture brd and permaaddr addresses, which is shown by `ip a`
NOTE
ifconfig | grep -oE "ether [a-f,0-9,:]+" | sed 's/ether //'