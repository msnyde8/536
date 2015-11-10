#include <stdio.h>
#include <string.h>

main()
{
	int a = 15;
	int b = a/2;

	printf("Printing integers:\n");
	printf("\ta=%d\n", a);
	printf("\tb=%d/2=%d\n", a, b);
	printf("Printing integers with padding:\n");
	printf("\tb=%3d\n", b);
	printf("\tb=%03d\n", b);

	float c = 15.3;
	float d = c/3;

	printf("\nPrinting decimals:\n");
	printf("\tc=%f\n",c);
	printf("\td=%f/3=%f\n", c, d);
	printf("Printing decimals with precision/padding:\n");
	printf("\td=%3.2f\n",d);
	printf("\td=%5.2f\n",d);
	printf("\td=%05.2f\n",d);

	char str[36] = "integers, decimals, strings, oh my!";

	printf("\nPrinting strings:\n");
	printf("\tstr=%s\n", str);
	printf("Printing strings with padding:\n");
	printf("\t|%-40s|\n", str);
	printf("\t|%40.36s|\n", str);
	printf("\t|%20.16s|\n", str);
}
