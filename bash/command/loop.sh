############################## from x_integer to y_integer
echo "example "
for (( c=1; c<=5; c++ ))
do
	echo -n "$c "
	sleep 1
done
####################
START=1
END=5
 
echo "example "
for (( c=$START; c<=$END; c++ ))
do
	echo -n "$c "
	sleep 1
done
 
########################## Wile

echo "example "
i=$START
while [[ $i -le $END ]]
do
    echo "$i"
    ((i = i + 1))
done

############################################
############################################ eval
############################################
echo "example "
for i in $(eval echo "{$START..$END}")
do
	echo "$i"
done
 
########################





ls | while read line; do ehco "${line}"; done;

# ----------------------------------------  CONTINUE
for (( c="1"; c<="5"; c++ ))
do
 echo "continue"
     continue
     ## nie uruchomi siê ani razu
	echo -n "$c "
	sleep 1
     ##	
done

# ---------------------------------------  BREAK
i="1"
while [[ $i -le "5" ]]
do
    echo "$i"
    ((i = i + 1))
 if [ "$i" -eq "3"  ]
 then
 echo "Przerwij dzia³anie while, je¿eli 3"
  break
 fi
done
# ----------------------------------------

ls | while read line ; do echo "${line}" ; done;
