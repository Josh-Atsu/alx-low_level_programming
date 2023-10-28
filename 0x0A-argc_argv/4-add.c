#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: the numbers of arguments
 * @argv: the arguments
 *
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int y;
	int j;

	i = 0;
	if (argc == 1)
	{
		printf("%d\n", i);
		return (0);
	}
	if (argc > 1)
	{
		y = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			y = y + atoi(argv[i]);
		}
		printf("%d\n", y);
	}
	return (0);
}
