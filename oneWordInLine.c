#include <stdio.h>
#define IN 1
#define OUT 0

// Вывод входного потока по одному слову в строке

int main (void) {

	int c;
	char state;

	state = OUT;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			if (state == IN) {
				putchar('\n');
				state = OUT;
			}
		} else {
			state = IN;
			putchar(c);
		}
	}

	return 0;
}
