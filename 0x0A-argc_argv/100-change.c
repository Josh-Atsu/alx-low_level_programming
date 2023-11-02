#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun number of coins
 * @argc: the number of arguments
 * @argv: The array of arguments on the command line
 *
 * Return: (0) if successful
 */

int main(int argc, char *argv[])
{
	int cents;
	int mncent;
	int i;

	mncent = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = cents; cents != 0; i--)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents == 1)
			cents -= 1;
		mncent += 1;
	}
	printf("%d\n", mncent);
	return (0);
}
