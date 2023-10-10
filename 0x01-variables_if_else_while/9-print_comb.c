#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int z;

	for (z = 0; z <= 9; z++)
	{
		putchar(z + '0');
		if (z < 9)
		{
			putchar(',');
		if (z < 9)
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
