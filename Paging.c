#include <stdio.h>
#include <stdlib.h>

void paging(long address) {
	unsigned long addressNumber = address;
	unsigned long pageNumber;
	unsigned long offsetNumber;

	pageNumber = addressNumber >> 12;
	offsetNumber = addressNumber & 0xfff;

	printf("The address %lu contains: \n", addressNumber);
	printf("page number = %lu\n", pageNumber);
	printf("offset = %lu\n", offsetNumber);
}

int main (int argc, char *argv[]) {
	paging(atol(argv[1]));
}
