#include "main.h"

/**
 * puts2 - prints two step character starting from the first
 * @str: contains the pointed string
 *
 * Return: every other character
 */

void puts2(char *str)
{
	int l;
	int t;

	t = 0;
	for (l = 0; str[l] != '\0'; l++)
		t++;

	l = 0;
	while (l < t)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
