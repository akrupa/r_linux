
main=main.c
main_out=${main:.c=}

all:
	gcc a.c  $(main)  -o $(main_out)

test:
	g++  --std=c++11 a.c a_test.cpp main_test.cpp -lgtest -lpthread -o test_main

clean:
	rm -f $(main_out)
	rm -f test_main 
