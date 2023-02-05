#!/bin/bash

echo "Enter marks (0-100):"
read marks

if [ $marks -ge 90 ]
then
  grade="A"
elif [ $marks -ge 80 ]
then
  grade="B"
elif [ $marks -ge 70 ]
then
  grade="C"
elif [ $marks -ge 60 ]
then
  grade="D"
else
  grade="F"
fi

echo "Marks: $marks"
echo "Grade: $grade"
