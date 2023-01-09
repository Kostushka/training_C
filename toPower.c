#include <stdio.h>

// Функция возведения в степень

int power(int x, int y);

int main (void) {

	int x, i;

	x = 2;

	for (i = 0; i <= 10; ++i) {
		printf("num ^ %d = %d\n", i, power(x, i));
	}	

	return 0;
}

int power(int x, int y) {

	int res;

	res = 1;

	while (y > 0) {
		res = res * x;
		--y;
	}

	return res;
	
}
