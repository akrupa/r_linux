# create foo.o
gcc -c -Wall -Werror -fpic foo.c

# create libfoo.so
gcc -shared -o libfoo.so foo.o

################### A
gcc -L .  -Wall -o test main.c -lfoo
./test

export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH

################### B
gcc -L . -Wl,-rpath=. -Wall -o test main.c -lfoo



################### Using ldconfig to modify ld.so

What if we want to install our library so everybody on the system can use it? For that, you will need admin privileges. You will need this for two reasons: first, to put the library in a standard location, probably /usr/lib or /usr/local/lib, which normal users don’t have write access to. Second, you will need to modify the ld.so config file and cache. As root, do the following:

$ cp /home/username/foo/libfoo.so /usr/lib
$ chmod 0755 /usr/lib/libfoo.so

Now the file is in a standard location, with correct permissions, readable by everybody. We need to tell the loader it’s available for use, so let’s update the cache:

$ ldconfig

That should create a link to our shared library and update the cache so it’s available for immediate use. Let’s double check:

$ ldconfig -p | grep foo
libfoo.so (libc6) => /usr/lib/libfoo.so

