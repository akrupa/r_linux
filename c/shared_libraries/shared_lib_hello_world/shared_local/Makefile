a:
	$(MAKE) --directory=../objects
	gcc -shared   ../objects/*.o  -o liba_hello_world.so
	gcc -I ../objects/  -Wl,-rpath=.  -Wall -o main main.c -la_hello_world
	./main

clean:
	rm  -f *.so
	rm  -f *.o
	$(MAKE) clean  --directory=../objects

# if don't see library 
# export LD_LIBRARY_PATH=../lib:../syncp/:LD_LIBRARY_PATH
