# Simple Makefile to compile each C script created by Markdown Code Extract
# This is generated from a template

CC := gcc
CFLAGS := -g3 -Wall -v --std=c2x -c

SRCS := $(wildcard *.c)
PROGS := $(patsubst %.c,%.o,$(SRCS))

all: $(PROGS)

# Rule to compile each C file
%.o: %.c
	$(CC) $(CFLAGS) -o $@.o $<

clean:
	rm -f $(PROGS)

