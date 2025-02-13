CC = gcc              # Compiler to use
CFLAGS = -Wall        # Compiler flags (e.g., enable all warnings)
OBJ = queueADT.o queueClient.o  # Object files to be generated
EXEC = queueProgram   # Output executable file

# Default target (the first target in the makefile)
all: $(EXEC)
	./$(EXEC)  # Run the program after building

# Rule for compiling the object files
queueADT.o: queueADT.c queueADT.h
	$(CC) $(CFLAGS) -c queueADT.c -o queueADT.o

queueClient.o: queueClient.c queueADT.h
	$(CC) $(CFLAGS) -c queueClient.c -o queueClient.o

# Rule for linking the object files into an executable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Clean up generated files
clean:
	rm -f $(OBJ) $(EXEC)
