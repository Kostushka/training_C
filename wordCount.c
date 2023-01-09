#include <stdio.h>
#define IN 1
#define OUT 0

// Подсчет слов

int main (void) {

	int c, wordCount;
	char state;

	wordCount = 0;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') {
			state = IN;
		} else if (state == IN) {
			++wordCount;
			state = OUT;
		}
	}

	printf("word count: %d\n", wordCount);

	return 0;
}
