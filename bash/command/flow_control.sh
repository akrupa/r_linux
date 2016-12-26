####################################### New sytax
if [[ statement ]] then ...  fi
if [[ statement ]] then ... else .. fi
if [[ statement ]] then if .. elif  [[statement]]  ..else_if


####################################### logical
||   or
&&   and

####################################### Integer Conditionals
-lt  Less than
-le  less than or equal
-eq  Equal
-ge  Great than or equal
-gt  Great than
-ne  Not equal


######################################## String comparison operators -- compare lexicographically
str1=str2   str1 matches str2
str1!=str2  str1 does not match str2
str1<str2   str1 is less than str2
str1>str2   str1 is great than str2
-n str1     str1 is not null (has length greater than 0)
-z str1     str1 is null (has length 0)

######################################### Opiton for file 
-a file exists
-d directory exists 
-f file exists and is regular file
-s file exists and is not empty 
-e file exists 

######################################### 
######################################### 
######################################### example
######################################### 
######################################### 
if [ "2" -lt "3" ]; then echo "2 <  3 => prawda"; fi
if [ "3" -le "3" ]; then echo "3 <= 3 => prawda"; fi
if [ "4" -gt "3" ]; then echo "4 >  3 => prawda"; fi
if [ "3" -ge "3" ]; then echo "3 >= 3 => prawda"; fi
if [ "3" -eq "3" ]; then echo "3 =  3 => prawda"; fi
if [ "4" -ne "3" ]; then echo "4 != 3 => prawda"; fi

## 
if [[ "a" < "b" ]]; then echo "a <  b => prawda"; fi
if [ "b"  >  "a" ]; then echo "b >  a => prawda"; fi
if [ "a"  =  "a" ]; then echo "a =  a => prawda"; fi
if [ "a" != "b"  ]; then echo "a != b => prawda"; fi

### regular expresion
if [[  "aaa" =~ "aa" ]]; then echo "T"; else echo "F"; fi

if [ -n "not null"  ]; then echo " not null => prawda"; fi
if [ -z ""  ]; then echo "  null => prawda"; fi
if [ -n " "  ]; then echo " ' ' => prawda"; fi



example 
# stara sk³adnia
if [ "1" -eq  "1" ]
then
echo "true"
fi

#Nowa sk³adnia
if [[ "1" -eq  "1" ]]
then
echo "true"
fi


if [ "1" -eq  "2" ]
then	
 echo "true"
else
 echo "false"
fi

#-------------------------------
if [ "1" -eq  "2" ]
then	
 echo "true"
elif [ "1" -gt "2" ] 
then
 echo  "true second"	
else
 echo "false"
fi
# ------------------------------

# -------------------------------------- logical conditions
if [[ "1" -eq  "1" && "2" -eq "2" ]]
 then
 echo "true"
fi
# --------------------------------------- drugi warunek nie zosta³ wogóle sprawdzony 
if [[ "1" -eq  "2" && "2" -eq "$((0/0))" ]]
then
 echo "true"
else 
 echo "It is false"       	
fi
#----------------------------------------- || > lub


