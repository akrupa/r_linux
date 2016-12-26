
--------------------------------------------------------------- change n-ty pattern
sed 's/;/\n/2'
2 -- drugie wystapienie 
[mis@mis and]$ echo  "aaa;bbb;ccc;ddd;eee;fff;ggg" | sed 's/;/\n/2'
aaa;bbb
ccc;ddd;eee;fff;ggg
[mis@mis and]$
-----------------------------------------------------------------


----------------------------------------------------------------- show line
[mis@mis tmp]$ echo "a
b
c
d
e
f
g
" | sed -n '3p'
c
------------------------------------------------------------------ show line between nr,nr
[mis@mis tmp]$ echo "a
> b
> c
> d
> e
> f
> g
> " | sed -n '3,5p'
c
d
e

------------------------------------------------------------------ usuwa

 echo "a
b
c
d
e
f
g
" | sed '3d'

--------------------------------------------------------------- zmienia wybran¹ linie 
echo  "
aaa
aaa
aaa
aaa
aaa
aaa
"  | cat -n  |  sed '3s/aaa/bbbbbbb/'

---------------------------------------------------------------- zmienia w wybranych liniach 
[mis@mis tmp]$ echo  "
aaa
aaa
aaa
aaa
aaa
aaa
"  | cat -n  |  sed '4,6s/aaa/bbbbbbb/'
     1
     2  aaa
     3  aaa
     4  bbbbbbb
     5  bbbbbbb
     6  bbbbbbb
     7  aaa
     8

