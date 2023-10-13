#include "main.h"

/**
 * more_numbers - Printing more numbers
 * Return: void
 */

void more_numbers(void)
{
	int x;
	int z;
	int y;

	z = 1;
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(z + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}

