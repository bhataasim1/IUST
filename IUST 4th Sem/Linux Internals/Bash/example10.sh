#!/bin/bash

echo "Enter Number"
read num

if [ $num -eq 3 ];
then
echo "You Are Lucky"
elif [ $num -eq 5 ];
then
echo "You are Good"
else
echo "You Are not Lucky"
fi
