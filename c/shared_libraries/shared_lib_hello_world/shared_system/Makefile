
a:
	$(MAKE) --directory=../objects
	gcc -shared   ../objects/a_hello_world.o  -o liba_hello_world.so
	sudo mv    ./liba_hello_world.so /usr/lib/liba_hello_world.so
	sudo cp    ../objects/a_hello_world.h /usr/include
	gcc   -Wall -o main main.c -la_hello_world


clean_part:
	sudo rm -f /usr/include/a_hello_world.h
	sudo rm -f /usr/lib/liba_hello_world.so

clean: clean_part
	rm -f *.so



