#include "main.h"

/**
 * print_diagonal - Outputs diagonal with a special character
 * @n: contains the conditions to be met
 * Return: That spesial character n times
 */

void print_diagonal(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (k = 1; k <= n; k++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
