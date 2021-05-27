#!/bin/bash
make
echo "open 'number' and read : "
./bin/iostream
echo "cat test.out : "
cat test.out
rm test.out