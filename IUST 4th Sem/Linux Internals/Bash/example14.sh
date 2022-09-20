#!/bin/bash

echo "Enter String"
read str

echo "${str:0:2}" #subString one Way

subStr=${str:2:5}
echo "$subStr"
