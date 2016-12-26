#!/bin/bash

#### awk
# 1. Create three file
# 2. for - Show all file whit name and nr of line
# 3. rm all

#  BED 
#  list is generate badly- not exacli free file

echo -e "a\nb\nc\nd\ne\nf"  > file_small_leter.txt
echo -e "A\nB\nC\nD\nE\nF"  > file_big_leter.txt
echo -e "I\nII\nIII\nIV\nV\nVI" > file_roman_digit.txt

{
for a in $(ls $(pwd)/file*.txt)
do
  echo "############################################   file $a"
  cat  $a  |  awk  -v zm=$a  '{print  zm  ":" NR ":"  $0}'
done
}


