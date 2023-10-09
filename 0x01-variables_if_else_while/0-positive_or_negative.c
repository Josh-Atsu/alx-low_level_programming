#include <stdlib.h>
#include <time.h>
/* more hearders goes there*/
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - The starting phase of the program
 *
 * Return: - terminate upon successful 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("Invalid input\n");
	}
	return (0);
}
