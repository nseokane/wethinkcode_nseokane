#!/bin/bash
clear
echo "Number of directories is: "
find . -type d | wc -l
echo "Number of files is: "
find . -type f | wc -l

sleep 1