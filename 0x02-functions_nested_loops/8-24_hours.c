#include "main.h"
/**
 * jack_bauer - print every minute of the time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int x, y = 0, i = 0, j = 0;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 10; j++)
				{
				if (x < 2 || y < 4)
				{
				_putchar(x + '0');
				_putchar(y + '0');
				_putchar(':');
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar('\n');
				}
				}
			}
		}
	}
}
