#!/bin/bash
clear

cat /etc/passwd | cut -f1,2 -d":" | sort -t: -n -k2