MAIN=e_void_type.c 
CC=gcc -g

TARGET := ${MAIN:.c=}

all: $(MAIN)
	$(CC)  $(MAIN) -o $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
