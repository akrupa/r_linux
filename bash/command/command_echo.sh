set -x 
echo -n "show and not move to next line "
echo "text with new line on the end"
echo -en "You will hear a sound\a, if we add option -e "; echo "\n"
echo  "interpreted special sign \ "


# What is the different
echo $(ls -1)
echo "$(ls -1)"

