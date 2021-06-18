#!/bin/bash
make
if (($# != 1))
then
	./bin/E00 42.42
else
	./bin/E00 $1
fi