#!/bin/bash
echo "== ERRORS =="
for i in samples/error*;
do
	./fillit $i | grep error;
done
echo "== VALID =="
for i in samples/valid*;
do
	./fillit $i | grep error | echo "OK";
done
