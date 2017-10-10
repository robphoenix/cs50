# compile the target program with compiler warnings,
# debug info, and include the cs50 library

# the name to use for both the target source file, and the output file:
TARGET = greedy

# the compiler to use
CC = clang

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# files to link:
# -lcs50 cs50 lib
# -lm    math lib
LFLAGS = -lcs50 -lm

# check50 identifier
IDENTIFIER = cs50/2017/x/greedy

all: $(TARGET)
$(TARGET): $(TARGET).c ; $(CC) $(CFLAGS) -o $(TARGET).out $(TARGET).c $(LFLAGS)

test:
	check50 -l $(IDENTIFIER)

# housekeeping
clean:
	rm -f *.out
