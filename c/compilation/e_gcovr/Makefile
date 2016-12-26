# Program musi zostać uruchomiony, aby otrzymać wnik z gcovr

TARGET=f

all: clean
	gcc -g -fprofile-arcs -ftest-coverage -fPIC -O0 $(TARGET).c -o $(TARGET)



run:
	./$(TARGET)

g: run
	gcovr -r .

clean:
	rm -f ./$(TARGET)
	rm -f $(TARGET).gcda
	rm -f $(TARGET).gcno

