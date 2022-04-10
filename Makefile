CC=gcc
CFLAGS=-I.

secondShortestWord:	main.o implementation.o
	$(CC) -o secondShortestWord main.o implementation.o