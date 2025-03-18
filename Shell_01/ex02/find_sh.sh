#!/bin/sh
: <<'INSTRUCTIONS'
Write a command line that searches for all files ending with .sh in the current
directory and all subdirectories.
• The output should display only the file names without the .sh extension
INSTRUCTIONS
: <<'NOTE'
(My own notes)
NOTE
find . -name "*.sh"