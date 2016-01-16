#!/bin/bash
echo "== ERRORS =="
for i in test_files/test_error*;
do
	./fillit $i | grep error;
done
echo "== VALID =="
for i in test_files/test_valid*;
do
	./fillit $i | grep error | echo "OK";
done
