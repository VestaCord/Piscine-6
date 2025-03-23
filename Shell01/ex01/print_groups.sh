#!/bin/sh
: <<'INSTRUCTIONS'
• Write a command line that displays the list of groups the user (defined in the
environment variable FT_USER) belongs to.
• The output should be comma-separated, without spaces.
INSTRUCTIONS
: <<'NOTE'
       -G, --groups
              显示所有组 ID

       -n, --name
              显示名称而非编号，与 -ugG 共同使用

NOTE
id -Gn $FT_USER | tr ' ' ',' | tr -d "\n"