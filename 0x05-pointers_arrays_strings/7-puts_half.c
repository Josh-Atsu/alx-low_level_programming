#include "main.h"

/**
 * puts_half - Prints the second half of the string
 * @str: function parameter
 *
 * Return: thehalf string
 */

void puts_half(char *str)
{
	int x;
	int length_of_the_string;
	int n;

	length_of_the_string = 0;
	for (x = 0; str[x] != '\0'; x++)
		length_of_the_string++;

	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}

	for (x = n; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
