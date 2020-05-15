all:
	gcc -c Paging.c -Wall -Wextra
	gcc -o Paging Paging.c -lm
	gcc Paging.c -o Paging -lm

Paging:
	gcc -c Paging.c -Wall -Wextra
	gcc -o Paging Paging.c -lm
	gcc Paging.c -o Paging -lm
clean:
	rm Paging Paging.o
