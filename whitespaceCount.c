#include <stdio.h>

// Подсчет сиволов пробела, табуляции, перевода строки

int main (void) {

	int c;
	int s, t, n = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case ' ':
				++s;
				break;
			case '\t':
				++t;
				break;
			case '\n':
				++n;
				break;
		}
	}
	
	printf("space count: %d\ntab count: %d\nline count: %d\n", s, t, n);

	return 0;
}
