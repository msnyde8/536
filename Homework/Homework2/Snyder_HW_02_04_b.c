#include <stdio.h>
#include <stdbool.h>
bool checkBounds(const unsigned char, const unsigned char);

int main () {
	unsigned char addOne = 254;
	unsigned char addTwo = 1;
	unsigned char result = 0;

	if(false == checkBounds(addOne, addTwo))
	{
		return -1;
	}
	result = addOne + addTwo;
	printf("Add %d + %d results in %d\n", addOne, addTwo, result);

	addTwo = 4;
	if(false == checkBounds(addOne, addTwo))
	{
		return -1;
	}
	result = addOne + addTwo;
	printf("Add %d + %d results in %d\n", addOne, addTwo, result);

	return 1;
}

bool checkBounds(const unsigned char oneInt, const unsigned char twoInt)
{
	if((twoInt > (256 - oneInt)))
	{
		printf("Integer overflow error\n");
		return false;
	}
	return true;
}
