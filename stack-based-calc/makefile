CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
OBJ = main.o calc.o stack.o
TARGET = main.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

main.o: main.c calc.h stack.h
	$(CC) -c main.c $(CFLAGS)

calc.o: calc.c calc.h stack.h
	$(CC) -c calc.c $(CFLAGS)

stack.o: stack.c stack.h
	$(CC) -c stack.c $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)
