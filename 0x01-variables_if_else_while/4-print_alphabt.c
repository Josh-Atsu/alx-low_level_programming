#include <stdio.h>

/**
 * main - The beginning phase
 *
 * Return: - the ending phase with 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');

	return (0);
}
