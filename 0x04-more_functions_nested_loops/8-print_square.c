#include "main.h"

/**
 * print_square - Output so that rows and columns are the same number
 * @size: is what determines the square
 * Return: the size
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;
		int j;

		for (k = 1; k <= size; k++)
		{
			for  (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
