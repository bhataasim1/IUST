#!/bin/bash

echo "Enter First String"
read str1

echo "Enter Second String"
read str2

echo "Concatnated Strings = "

echo "$str1 $str2" #One Way

str3=$str1$str2 #Another Way
echo "$str3"
