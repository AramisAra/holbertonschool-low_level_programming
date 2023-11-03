#!/bin/bash

#Check if there are any uncommited changes
if [[ $(git status) ]];
then
    git add .
    git commit -m "$1"
    git push
else
    echo "No changes to commit and push."
fi