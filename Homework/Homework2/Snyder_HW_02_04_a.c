#include <stdio.h>

int main () {
	unsigned char addOne = 254;
	unsigned char addTwo = 1;
	unsigned char result = 0;

	result = addOne + addTwo;
	printf("Add %d + %d results in %d\n", addOne, addTwo, result);

	addTwo = 4;
	result = addOne + addTwo;
	printf("Add %d + %d results in %d\n", addOne, addTwo, result);

	return 1;
}
