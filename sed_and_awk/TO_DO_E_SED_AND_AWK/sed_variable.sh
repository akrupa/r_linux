#!/bin/bash

#### sed

data="Ala ma kota i psa"
zm="krokodyla"

# 1)
echo $data | sed "s/psa/$zm/g"

# 2)
echo $data | sed 's/psa/'$zm'/g'
##### UWAGA:
#zm   nie mo¿e zawieraæ pustyc ciagów znaków 
echo $data | sed 's/psa/'"$zm"'/g'  <>  #1) 


################################################################ Example 2
#!/bin/bash

#### sed

data="Ala ma kota i psa"

echo "###################### ORIG date: $data"
echo $data  | sed 's/kota/chomika/'
echo $data  | sed 's/\(kota\)/\1, chomika/'
echo $data  | sed 's/^.*\(kota\)/\1, chomika/'
echo $data  | sed 's/\(kota\).*$/\1, chomika/'
echo $data  | sed 's/\(kota\)/\1, chomika/'


########################################################### exmple 2
data="START word_a word_b word_c   END"
s_zm="word_b"
#zm="krokodyla"
r_zm=" Zamiana "
echo "###################### ORIG date: $data"


echo $data  | sed "s/$s_zm/$r_zm/g"
echo $data  | sed 's/\('"$s_zm"'\)/\1, dopisujemy do znalezionego wyrazenia '"$r_zm"'/'
echo $data  | sed 's/^.*\('"$s_zm"'\)/\1/'
echo $data  | sed 's/\('"$s_zm"'\).*$/\1/'
echo $data  | sed 's/^.*\('"$s_zm"'\).*$/\1/'
#echo $data  | sed 's/\(kota\).*$/\1, chomika/'
#echo $data  | sed 's/\(kota\)/\1, chomika/'

echo "################################### END "

######################################################### & -- sed
echo "and" | sed 's/.*/&/g'


