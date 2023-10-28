#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: the number of strings in the command line prompt
 * @argv: the entire argument
 *
 * Return: 0 or number of arguments
 */

int main(int argc, char *argv[])
{
	int count;
	int num;
	(void)*argv[0];

	num = 0;
	if (argc == 1)
	{
		printf("%d\n", num);
	}
	else if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			num++;
		}
		printf("%d\n", num);
	}
	return (0);
}
