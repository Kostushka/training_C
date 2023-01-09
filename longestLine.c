#include <stdio.h>
#define MAX 1000

// Программа считывает строки из входного потока
// выводит самую длинную строку

int main (void) {

	int i, c, lineLength, maxline;
	char s[MAX];
	char res[MAX];

	lineLength = maxline = 0;

	while ((c = getchar()) != EOF) {
	
		if (c != '\n' && lineLength < MAX - 1) {
		
			// перезаписываю элементы массива с текущей строкой
			s[lineLength] = c;
			++lineLength;
			
		} else {
		
			if (maxline < lineLength) {
			
				maxline = lineLength;
				
				for (i = 0; i < lineLength; ++i) {
					res[i] = s[i];
					// занулять необязательно,
					// текущие символы перезапишутся символами более длинной строки
					// s[i] = 0;
				}
				
				res[lineLength] = '\0';
				lineLength = 0;
				
			}
			// зануляем элементы массива с текущей строкой
			// for (i = 0; i < lineLength; ++i) {
				// s[i] = 0;
			// }
			lineLength = 0;

		}
	}
	
	printf("%s\n", res);

	return 0;
}
