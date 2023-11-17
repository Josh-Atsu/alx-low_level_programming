#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds up all numbers in the argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int i, n, add = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			 printf("%d\n", n); 
			if ((isdigit(n)))
			{
				printf("Error\n");
				return (1);
			}
			add += n;
		}
	}
	else if (argc == 1)
		add = 0;
	printf("%d\n", add);
	return (0);
}
