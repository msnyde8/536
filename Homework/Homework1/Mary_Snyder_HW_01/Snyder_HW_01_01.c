#include <stdio.h>

int GCD (int, int);

int main()
{
	int dividendA = 0;
	int divisorB = 0;
	printf ("Enter dividend : ");
	scanf ("%d", &dividendA);
	while(divisorB == 0)
	{
		printf ("Enter divisor (non-zero): ");
		scanf ("%d", &divisorB);
	}
	printf ("Greatest common denominator of %d and %d are ",
		dividendA, divisorB);

	int gcdRtn = GCD(dividendA, divisorB);

	printf ("%d\n", gcdRtn);

	return 0;
}

int GCD (int dividendA, int divisorB)
{
	if (abs(divisorB) > abs(dividendA))
	{
		return GCD(divisorB, dividendA);
	}

	int remainder = dividendA % divisorB;

	if(remainder == 0)
	{
		return abs(divisorB);
	}

	return GCD(remainder, divisorB);
}

