grep -ip '^nicolas\|^bomber' $1 | grep -ip bomber | grep -ip nicolas | sed  -E 's/[^0-9]*([0-9\-]*).*/\1/' | grep '-'
