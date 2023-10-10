#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (successful)
 */

int main(void)
{
	int vex;
	char rex;

	for (vex = 0; vex <= 9; vex++)
	{
		putchar(vex + '0');
	}
	for (rex = 'a'; rex <= 'f'; rex++)
	{
		putchar(rex);
	}
	putchar('\n');

	return (0);
}
