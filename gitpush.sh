git add .

echo 'Colocame el nombre de ese commit aca abajo:'
read commitMessage

git commit -m "$commitMessage"

# echo 'En que rama te pusheo esto pa?'
#read branch

#git Push Origin $branch

git push

read
