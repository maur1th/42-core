touch -A -000001 -a bomb.txt |stat -s bomb.txt | sed 's/.*atime=//' | sed 's/ .*//' | cat -e
