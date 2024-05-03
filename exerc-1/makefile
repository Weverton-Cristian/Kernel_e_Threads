CC = gcc
CFLAGS = -Wall -Wextra -pthread

all: exercicio_1

exercicio_1: exercicio_1.o
	$(CC) $(CFLAGS) -o exercicio_1 exercicio_1.o

exercicio_1.o: exercicio_1.c
	$(CC) $(CFLAGS) -c exercicio_1.c

clean:
	rm -f exercicio_1 exercicio_1.o
