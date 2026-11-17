CC = gcc
CFLAGS = -Wall -Wextra

escola: main.c aluno.c notas.c aluno.h notas.h escola
	$(CC) $(CFLAGS) main.c aluno.c notas.c -o escola

clean:
	rm -f escola
