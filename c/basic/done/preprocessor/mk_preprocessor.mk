

MAIN=e_preprocessor.c

CC=gcc -g

TARGET := ${MAIN:.c=.out}

all: $(MAIN)
	$(CC)  $(MAIN) -o $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
