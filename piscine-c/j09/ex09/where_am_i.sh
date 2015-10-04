#!/bin/bash
ip=$(ifconfig | grep "inet " | grep -v "127.0.0.1" | sed  -E 's/[^0-9]*([0-9\.]*).*/\1/')
if [[ -z "$ip" ]]; then
	echo "Je suis perdu!"
else
	echo "${ip}"
fi