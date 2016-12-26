#/bin/bash
set -x


container=c_hello

w=$( sudo  docker ps -a | grep ${container})
if [[ "$?" -ne "0" ]]
then
   echo "Check if the container exists failed"
   exit 1
fi

if [[ "${#w}" -ge 7 ]]
then
    docker stop $container
    docker rm   $container
fi


