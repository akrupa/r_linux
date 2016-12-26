#!/bin/bash
set -x
#Show absolute path of exexcuting script
echo "BASH_SOURCE[0] <=> ${BASH_SOURCE[0]}"
project="$( cd $(dirname ${BASH_SOURCE[0]}) && pwd)"
echo ${project}

