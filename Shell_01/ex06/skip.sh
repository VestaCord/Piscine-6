#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that executes ls -l but displays only every second line,
starting from the first line
INSTRUCTIONS
: <<'NOTE'
NR Means Number of Record
NOTE
ls -l | awk 'NR%2==0'