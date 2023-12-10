#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (successful)
 */

int main(void)
{
	int i, num;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
		{
			num = i + 87;
			putchar(num);
		}
	}
	putchar('\n');
	return (0);
}
