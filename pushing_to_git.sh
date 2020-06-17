#!/bin/bash
clear
git status
echo "What do you want to add to the commiting stage?"
read -p 'name:' name
git add $name
git status
sleep 3
echo "commit description?"
read -p 'description:' description
git commit -m '$description'
git status
sleep 3
echo "do you want to push to your repository? y/n"
read -p '[y/n]:' response
if ["$response" = "y"] then
    git push origin master
fi