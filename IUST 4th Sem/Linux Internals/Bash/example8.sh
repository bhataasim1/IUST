#!/bin/bash

echo "Enter Username"
read Username

echo "Enter Password"
read Password

if [[ (Username == "Admin" && Password == "Secret") ]]; then
echo "$Username is Valid"
else
echo "$Username is not Valid"
fi
