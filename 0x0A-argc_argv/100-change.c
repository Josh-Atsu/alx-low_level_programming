#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code or make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 1, 0 or -1
 */
int main(int argc, char *argv[])
{
	int n, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	while (n > 0)
	{
		if (n >= 25)
		{
			count += 1;
			n = n - 25;
		}
		else if (n >= 10)
		{
			count += 1;
			n = n - 10;
		}
		else if (n >= 5)
		{
			count += 1;
			n = n - 5;
		}
		else if (n >= 2)
		{
			count += 1;
			n = n - 2;
		}
		else if (n >= 1)
		{
			count += 1;
			n = n - 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
