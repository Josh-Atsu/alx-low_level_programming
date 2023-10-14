#include "main.h"

/**
 * print_line - print long line in the terminal
 * @n: function parameter
 * Return: returns n
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
