# Define the compiler
CC = gcc

# Define the compiler flags
CFLAGS = -Wall -Werror

# Define the linker
LD = gcc

# Define the linker flags
LDFLAGS = 

# Define the target executable name
TARGET = main

# Collect all source files in current directory and subdirectories
SOURCES = $(shell find . -name "*.c")

# Object files (one for each source)
OBJECTS = $(patsubst %.c,%.o,$(SOURCES))

# Default rule (all is the target)
all: $(TARGET)

# Rule for making the target
$(TARGET): $(OBJECTS)
	$(LD) $(LDFLAGS) -o $@ $^

# Generic rule for making object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule for cleaning the directory
clean:
	$(RM) $(OBJECTS) $(TARGET)

.PHONY: all clean
