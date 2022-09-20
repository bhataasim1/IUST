#!/bin/bash

str1="Linux"
str2="Internals"
echo "$str1 $str2" #One Way

str3=$str1$str2 #Another Way
echo "$str3"
