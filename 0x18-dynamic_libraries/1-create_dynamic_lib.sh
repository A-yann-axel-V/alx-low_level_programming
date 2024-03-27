#!/bin/bash

cfiles=$(ls *.c | wc -w)
if [ "$cfiles" -gt 0 ]; then
	gcc -c -fPIC *.c
	gcc -shared -o liball.so *.o
fi
