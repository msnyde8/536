#include <stdio.h>
#include <math.h>

bool isPrime (int);

int main()
{
	int intN = 0;
	printf ("Enter integer : ");
	scanf ("%d", &intN);
	printf ("Prime number closest to %d is ", intN);

	bool foundNum = false;
	while (foundNum == false)
	{
		foundNum = isPrime(++intN);
	}

	printf ("%d\n", intN);

	return 0;
}

bool isPrime (int intK)
{
	int intSeed = (int)(sqrt(intK));

	if ((intK % 2 ) == 0)
	{
		return false;
	}
	for(int i = 3; i <= intSeed; i += 2)
	{
		if((intK % i) == 0)
		{
			return false;
		}
	}

	return true;
}

