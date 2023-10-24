#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabets lower case
 *
 * Return: Void
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
