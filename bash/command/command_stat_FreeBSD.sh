 In order to get a list of file types including files pointed to if the
     file is a symbolic link, you could use the following format:

           $ stat -f "%N: %HT%SY" /tmp/*
           /tmp/bar: Symbolic Link -> /tmp/foo
           /tmp/output25568: Regular File
           /tmp/blah: Directory
           /tmp/foo: Symbolic Link -> /
 In order to determine the permissions set on a file separately, you could
     use the following format:

           > stat -f "%Sp -> owner=%SHp group=%SMp other=%SLp" .
           drwxr-xr-x -> owner=rwx group=r-x other=r-x
stat -f "%Sp  $(pwd)%N "  *	      
	   

 In order to determine the three files that have been modified most
     recently, you could use the following format:

           > stat -f "%m%t%Sm %N" /tmp/* | sort -rn | head -3 | cut -f2-
           Apr 25 11:47:00 2002 /tmp/blah
           Apr 25 10:36:34 2002 /tmp/bar
           Apr 24 16:47:35 2002 /tmp/foo


   To display a file's modification time:'

           > stat -f %m /tmp/foo
           1177697733

     To display the same modification time in a readable format:

           > stat -f %Sm /tmp/foo
           Apr 27 11:15:33 2007

     To display the same modification time in a readable and sortable format:

           > stat -f %Sm -t %Y%m%d%H%M%S /tmp/foo
           20070427111533
	   


# stat -f %Sm -t %Y-%m-%d\ %H:%M:%S   * | sort -rn | head -3
# stat -f "%m %Sm  %N "   * | sort -rn | head -3
 	   
#stat -x
