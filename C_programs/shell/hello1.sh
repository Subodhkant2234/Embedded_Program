#!/bin/bash
echo "This is the shell programming";
echo "enter the value of var";
read var;
if [ $var -le 6 ];
then 
echo "The variable is less than equal to 6";
else
echo "The variable is greater than 6";
fi
