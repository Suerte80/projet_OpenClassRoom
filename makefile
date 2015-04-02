CC = gcc
CFLAGS = -Wall -std=c99
EXEC = listeVarEnv

all: $(EXEC)

$(EXEC): main.o
	$(CC) $^ -o $(EXEC)

main.o:
	gcc -c main.c -o $@ $(CFLAGS)

clean:
	rm *o $(EXEC)
