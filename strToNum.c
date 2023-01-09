#include <stdio.h>

// 0xff -> ff -> f * 16^1 + f * 16^0 -> 15 * 16^1 + 15 * 16^0 -> 255

// 0xff -> ffff ->
// 0 = 0 * 16 + f ->
// 0 = 0 * 16 + 15 ->
// 15 = 15 * 16 + 15 -> 255 (1ый разряд 1 раз * 16 + 2ой)
// 255 = 255 * 16 + 15 -> 4095 (1ый разряд 2 раз * 16, 2ой разряд 1 раз * 16 + 3ий)
// 4095 = 4095 * 16 + 15 -> 65535 (1ый разряд 3 раз * 16, 2ой - 2ой раз, 3ий - 1ый раз + 4ый)

// аналогично 5 -> 50 + 5 -> 550 + 5 -> 5550 + 5 -> 5555 

int htoi(char s[]);
int convertToNum(char s);

int main(void) {

	char str[] = "0xffFF";

	printf("%0x: ", htoi(str));
	printf("%d\n", htoi(str));

	return 0;
}

int htoi(char s[]) {

	int i, start, num, result;

	start = result = 0;

	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
		start = 2;
	}

	for (i = start; (num = convertToNum(s[i])) != -1; ++i) {
		result = result * 16 + num;
	}

	return result;
}

int convertToNum(char s) {

	if (s >= '0' && s <= '9') {
		return s - '0';
	}

	if (s >= 'A' && s <= 'F') {
		return s - 'A' + 10;
	}

	if (s >= 'a' && s <= 'f') {
		s = s - ('a' - 'A');
		return s - 'A' + 10;
	}

	return -1;
}
