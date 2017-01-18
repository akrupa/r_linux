set -x 
b=build

rm -rf ${b}

if [[ "clean" = "${1}" ]]
then
   echo "clean project"
   exit 0
fi

mkdir ${b}
cd ${b}
cmake -DOPTION_B=ON  ../



