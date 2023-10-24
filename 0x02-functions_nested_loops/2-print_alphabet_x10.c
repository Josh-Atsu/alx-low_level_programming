#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int u;
	char v;

	u = 0;
	while (u < 10)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			_putchar(v);
		}
		_putchar('\n');
		u++;
	}
}
