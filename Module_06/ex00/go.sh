#!/bin/bash
make
if (($# != 1))
then
	./bin/convert 42.42
else
	./bin/convert $1
fi