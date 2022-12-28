CC = gcc
CFLAGS = -Wall -g

noise.o: noise1234.c noise1234.h
	$(CC) $(CFLAGS) -c $< -o $@

prog: main.c noise.o
	$(CC) $(CFLAGS) $^ -o $@

run:
	./prog