#include <stdio.h>
#define LIM 82 // 0 ... 80 + '\0'

// Программа выводит строки из входного потока, длина которых больше 80

int main (void) {

	int c, count;
	char line[LIM];

	count = 0;

	while((c = getchar()) != EOF) {
	
		if (c != '\n') {
		
			line[count] = c;
			++count;
			
		} else {	
			count = 0;		
		}

		if (count == LIM - 1) {
		
			line[count] = '\0';
			printf("%s", line);
			
			while((c = getchar()) != EOF && c != '\n') {
				putchar(c);
			}
			printf("\n");
			
			count = 0;
		}
	}


	return 0;
}
