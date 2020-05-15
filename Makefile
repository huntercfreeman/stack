CC=gcc
CFLAGS=-Wall -g

all: mainapp

mainapp: main.o stack.o stringBuilder.o
	$(CC) $(CFLAGS) main.o stack.o stringBuilder.o -o mainapp

stack.o: stack.c
	$(CC) $(CFLAGS) -c stack.c

stringBuilder.o: stringBuilder.c
	$(CC) $(CFLAGS) -c stringBuilder.c

clean:
	rm a.out *.o mainapp
