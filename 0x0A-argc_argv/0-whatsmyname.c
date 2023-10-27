#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: number of arguments on the command line
 * @argv: argument vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
