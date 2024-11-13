#!/bin/bash

# script adds all changes made on a git repo, commits them with a generic commit message and pushes same to remote repo.
# only use when you are fully confident that you want to push all changes with no reservations.

echo "PUSHING ALLLLLL CHANGES TO REMOTE!"
git status
echo ""
echo "Are you sure you want to add, commit and push all changes at once?:(y/n)"
read choice

if [[ $choice == "yes" || $choice == 'y' ]]; then
	echo ""
	git add .
	git commit -m "updated"
	git push
	echo ""
	echo "All Set - changes added to remote!"
else
	echo ""
	echo "Action Cancelled"
fi
