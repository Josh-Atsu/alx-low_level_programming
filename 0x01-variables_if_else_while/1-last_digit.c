#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The Starting point
 *
 * Return: - Terminates when it returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	int m = abs(n % 10);

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
		printf("Invalide input");

	return (0);
}
