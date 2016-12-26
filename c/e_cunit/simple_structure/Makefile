LIBS := -lcunit
CFLAGS := -g -Wall -std=c99 -Werror


main=max_test.c

sources := max.c
sources += max_test.c
objects := ${sources:.c=.o}

target= max_test


$(target):  $(objects) 
	@echo "Objects: $(objects)"
	gcc $(CFLAFS)  $(objects)  $(LIBS) -o $@

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $^
############################## $?  dziala podobnie ale dodaje tylko te zmiany, które się zmienily
clean:
	rm -f $(target)
	rm -f $(objects)



