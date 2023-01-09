#include <stdio.h>
#include <limits.h>

// Программа определения диапазонов типов данных (signed/unsigned)
// char
// int
// short
// long
// float
// double

int main (void) {

	// float f;

	// f = 3;

	// 8 бит: 7 + знак
	printf("signed char: %d %d\n", CHAR_MIN, CHAR_MAX);
	printf("char: 0 - %d\n", UCHAR_MAX);	

	// 32 бита: 31 + знак
	printf("signed int: %d %d\n", INT_MIN, INT_MAX);
	printf("int: 0 - %d\n", UINT_MAX); // не работает, только signed

	// 16 бит: 15 + знак
	printf("signed short: %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("short: 0 - %d\n", USHRT_MAX);

	// 64 бит: 63 + знак
	printf("signed long: %ld %ld\n", LONG_MIN, LONG_MAX);
	printf("long: 0 - %ld\n", ULONG_MAX); // не работает, только signed
	
	// printf("float signed: %f\n", f);
	
	return 0;
}
