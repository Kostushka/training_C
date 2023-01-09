#include <stdio.h>
#define IN 1
#define OUT 0

// Программа вывода длин слов во входном потоке

int main (void) {

	int c, length;
	char state;

	length = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			state = IN;
			++length;
		} else if (state == IN) {
			state = OUT;
			printf("word length: %d\n", length);
			length = 0;
		}
	}

	return 0;
}
