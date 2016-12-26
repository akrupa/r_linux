
CC= gcc -g
LDFLAGS= -lpthread

source := pthread_hello.c

target := ${source:.c=}

all:
	$(CC) $(source)  $(LDFLAGS) -o $(target)

clean:
	rm $(target)
