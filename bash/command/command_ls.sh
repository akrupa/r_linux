#TO_DO
#trzeba patrzeć na system

ls -1  wy<9c>wietla katalogi w jednej kolumnie 

-S                         sort by file size
      --sort=WORD          sort by WORD instead of name: none (-U), size (-S),
                           time (-t), version (-v), extension (-X)
      --time=WORD            with -l, show time as WORD instead of default
                              modification time: atime or access or use (-u)
                              ctime or status (-c); also use specified time
                              as sort key if --sort=time

-r, --reverse              reverse order while sorting
-d, --directory            list directories themselves, not their contents
ls -lX  # sort by type
-B, --ignore-backups       do not list implied entries ending with ~




################## reversal sort
touch a.txt
touch b.txt

$ ls -1 -r
a.txt
b.txt
$ ls -1 -r
b.txt
a.txt
###################



################## Ubuntu
## List file with full abstract path.
ls -1  -d  $(pwd)/*

################## Sort by extension 
ls -X

################## show timestamp of file
ls --full-time
