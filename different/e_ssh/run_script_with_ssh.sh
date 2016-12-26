ssh  login@address   'bash -s'  <  ./name_of_script.sh
echo "for b in \$(ls);  do echo \$b; done;  "  | ssh  login@address   'bash -s'


