#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0 on success
 */

int main(void)
{
	long int x;
	long int k;
	long int j;

	x = 612852475143;
	k = -1;

	while (x % 2 == 0)
	{
		k = 2;
		x /= 2;
	}

	for (j = 3; j <= sqrt(x); j = j + 2)
	{
		while (x % j == 0)
		{
			k = j;
			x = x / j;
		}
	}
	if (x > 2)
	{
		k = x;
	}
	printf("%ld\n", k);
	return (0);
}
