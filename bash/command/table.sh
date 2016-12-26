t=(a bb ccc dddd )

echo "Amount of table ${#t[@]}"
echo "show length of fourth elements: ${#t[3]}"
echo "Show third  element of table ${t[2]}" # We are numerate table from zero. So we will see on the screen 'ccc'.

echo "All elements: ${t[@]} "
IFS=";"
echo "ALL elements: ${t[*]}"
#################### Show all elements of table
for x in ${t[@]}
do
  echo "${x}"
done
####################
