#include <stdio.h>

int main()
{
	int integer1 = 0;
	int integer2 = 0;
	printf ("Enter integer 1: ");
	scanf ("%d", &integer1);
	printf ("Enter integer 2: ");
	scanf ("%d", &integer2);

	printf ("Sum of %d and %d is %d\n", integer1, integer2, (integer1 + integer2));

	printf ("Product of %d and %d is %d\n", integer1, integer2, (integer1 * integer2));

	return 0;
}
