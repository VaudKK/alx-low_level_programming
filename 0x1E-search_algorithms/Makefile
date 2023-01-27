.PHONY: all

CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=gnu89

all: myapp

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $^

myapp: *.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o myapp *.gch