#!/bin/bash

echo "Building program..."
g++ src/average.cpp -o average

echo "Running test..."
./average data/test1.txt > out/test1.txt

echo "Comparing results..."
if diff out/test1.txt gold/test.txt
then
    echo "PASS"
else
    echo "FAIL"
fi
