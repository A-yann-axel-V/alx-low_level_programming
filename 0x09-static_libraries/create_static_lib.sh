#!/bin/bash

count=$(ls *.c | wc -w)
if [ "$count" -gt 0 ]; then
	gcc -c *.c
	ar rcs liball.a *.o
else
	echo "No .c files found"
fi
