# compile the target program with compiler warnings,
# debug info, and include the cs50 library

# the name to use for both the target source file, and the output file:
TARGET = mario

# the compiler to use
CC = clang

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# files to link:
# -lcs50 cs50 lib
LFLAGS = -lcs50

# check50 identifier
IDENTIFIER = cs50/2017/fall/mario/more

all: $(TARGET)
$(TARGET): $(TARGET).c ; $(CC) $(CFLAGS) -o $(TARGET).out $(TARGET).c $(LFLAGS)

test:
	check50 -l $(IDENTIFIER)

# housekeeping
clean:
	rm -f *.out
