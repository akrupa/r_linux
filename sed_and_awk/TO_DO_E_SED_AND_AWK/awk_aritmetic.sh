

{ 
echo "example "
for (( c=1; c<=5; c++ ))
do
	echo  "$c ; $((c+1))" 
done
} | awk -F ';' | | awk -F ';'  '{x=x+$1; y=y+$2} END {print x " " y}'
