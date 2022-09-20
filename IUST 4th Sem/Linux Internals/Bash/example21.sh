#!/bin/bash

file='textfile_path.txt'
while read line; do
echo $line
done < $file
