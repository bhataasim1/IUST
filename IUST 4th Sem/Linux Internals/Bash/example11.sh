#!/bin/bash

echo "Enter Lucky Number"
read num
case $num in
1)
echo "You are Very Lucky";;
2)
echo "You are Lucky";;
3)
echo "You are Not Lucky";;
*)
echo "Try Next Time"
esac
