#include <stdio.h>

// Копирование входного потока в выходной по символу

int main (void) {

	int c;

	while ((c = getchar())!= EOF) {
		putchar(c);
	}

	return 0;
}
