#include <stdio.h>

// Считает количество символов

int main (void) {

	int c, count;

	count = 0;

	while((c = getchar()) != EOF) {
		++count;
	}
	
	printf("char count: %d\n", count);

	return 0;
}
