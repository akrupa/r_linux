#!/bin/bash


echo "source ./name_faile.sh"
source ./variables.sh

./c.sh   # We will see only variables  which was declarated with export
. ./c.sh # will all variables


# Resal it is this same.
# . variables.sh
# ./c.sh
# . ./c.sh
