#include <stdio.h>
#define LIM 1000

// Программа считывает строки из входного потока и выводит самую длинную строку

int getLineLength(char line[]);
void copy(char line[], char maxline[]);

int main (void) {

	int lineLength, maxLineLength;
	char line[LIM], maxline[LIM];

	maxLineLength = 0;

	while((lineLength = getLineLength(line)) > 0) {
		if (lineLength > maxLineLength) {
			maxLineLength = lineLength;
			copy(line, maxline);
		}
	}
	printf("%s", maxline);

	return 0;
}

int getLineLength(char line[]) {

	int i, c;

	for (i = 0; i < LIM - 1; ++i) {
	
		if ((c = getchar()) != EOF && c != '\n') {
			line[i] = c;
		} else {
			break;
		}

	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
	
}

void copy(char line[], char maxline[]) {

	int i = 0;
	
	while((maxline[i] = line[i]) != '\0') {
		++i;
	}
}
