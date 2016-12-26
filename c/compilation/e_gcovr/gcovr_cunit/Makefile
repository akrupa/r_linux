######################################################### Request for comment
# We use to check whether check all line of code 

# -e  : if We don't want to check some directory or file 

######################################################### LIB
LIBS := -lcunit



######################################################### CFLAGS

GCOVER_CFLAGS := -fprofile-arcs -ftest-coverage
 # We need this file to compile, but we don't want generate file  *.gcno

GCOVER_CFLAGS_COMPILE := -fprofile-arcs
CFLAGS := -g -Wall -std=c99 -Werror -fPIC


######################################################### FILE

######################### MAIN
main := main.c
main_test += main_test.c

sources := f.c b.c
objects := ${sources:.c=.o}

########################################################
######################################################## MAKE
########################################################

main: $(objects) $(main)
	gcc $(CFLAGS) $(GCOVER_CFLAGS)   $(objects)  $(main)    -o $@

########### look at differet between flags of compilatin
test:  $(objects) $(main_test)
	gcc $(CFLAGS) $(GCOVER_CFLAGS_COMPILE) $(objects) $(main_test) $(LIBS) -o $@


%.o: %.c
	gcc $(CFLAGS) $(GCOVER_CFLAGS)  -o $@ -c $^
clean:
	rm -f $(objects)
	rm -f main
	rm -f test 
	rm -f *.gcda
	rm -f *.gcno

####################################################
r:
	@echo "##################### START RUN PROGRAM"
	./main
	@echo "##################### END RUN PROGRAM"
	gcovr -r .

rt:
	@echo "##################### START RUN TEST"
	./test
	@echo "##################### END RUN TEST"
	gcovr -r .
