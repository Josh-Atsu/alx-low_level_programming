#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks code a print all arguments
 * @argc: The number of argument
 * @argv: the arguments
 *
 * Return: 1 or 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
