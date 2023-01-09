#include <stdio.h>
#define MAX_VALUE 10

// Программа, которая подсчитывает 
// количество каждой цифры: 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 

int main (void) {

	int c, i;
	char digits[MAX_VALUE];

	for (i = 0; i < MAX_VALUE; ++i) {
		digits[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++digits[c - '0'];
		}
	}

	for (i = 0; i < MAX_VALUE; ++i) {
		printf("digits count: |%d| %d\n", i, digits[i]);
	}
	
	return 0;
}
