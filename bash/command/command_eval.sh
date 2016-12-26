# eval - construct command by concatenating arguments
set -x

foo=10 
bee=20

x=foo
y=bee

t="e=\$$x"

eval $t 
echo ${e}

eval e='$'$y
echo ${e}

set +x

a=1
b=2
export line="\${a} ; \${b}"  # eval intepret ; It is specjal character.
echo "line: ${line}"

eval echo ${line} 

