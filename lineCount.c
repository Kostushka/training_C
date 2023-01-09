#include <stdio.h>

// Подсчет строк

int main (void) {

	int c, count;

	count = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++count;
		}
	}
	printf("line count: %d\n", count);

	return 0;
}
