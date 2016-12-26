#!/bin/bash

echo "Operation on variables"

t=(a b c d e)

z="aaBBcc"

echo "Zmienna z: ${z}"
echo "\${z#a*B} <=> ${z#a*B}"  # Use value of var after removing text matching pattern from the left. Remove the shortest matching piece
echo "\${z##a*B} <=> ${z##a*B}" #  Same as #pattern, but remove the longest matching piece. 

echo "\${z%B*c}  <=> ${z%B*c}" # same as # but text matching pattern from the right
echo "\${z%%B*c} <=> ${z%%B*c}" # same as ## but test matching pattern from the right

echo "\${z^a}  <=> ${z^a}" # upper case  the short pattern
echo "\${z^^a} <=> ${z^^a}" # upper case the longest pattern
echo "\${z^^*} <=> ${z^^*} " # upper case whole word
echo "\${z^^*} <=> ${z^^aabbcc} " # upper case whole word

echo "\${z,,b}${z,,B}" # same as ^ but  lower case the short pattern

g="abcabc"
echo "Zmienna g: ${g}"
echo "\${g##abc} <=> ${g##abc} ; "
echo "\${g##ab} <=> ${g##ab} ; "
echo "\${g^^ab} <=> ${g^^ab} don't work"
echo "\${g^ab} <=> ${g^ab} don't work"
echo "\${g^a} <=> ${g^a}"
echo "\${g^^a} <=> ${g^^a}"

