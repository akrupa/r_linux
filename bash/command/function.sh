#!/bin/bash


function hello()
{
    echo "Hello World!"
}

function pass_argument()
{
     echo "Passed argument $@"
     RETVAL="You are passed $#"
     return 0
}

hello 

pass_argument v1 v2 vv3
echo $RETVAL
