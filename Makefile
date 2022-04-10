CC=gcc
CFLAGS=-I.

secondShortestWord:	main.o
	$(CC) -o secondShortestWord main.o