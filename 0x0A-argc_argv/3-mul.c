#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success or 1 and Error.
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		y = atoi(argv[1]);
		x = atoi(argv[2]);
		printf("%d\n", y * x);
	}
	return (0);
}
