#include <stdio.h>

// Программа копирования входного потока в выходной с заменой нескольких пробелов одним пробелом

int main (void) {

	int c, prev;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && prev == ' ') {
			continue;
		}
		putchar(c);
		prev = c;
	}
	
	return 0;
}
