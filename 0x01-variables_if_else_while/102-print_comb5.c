#include <stdio.h>
/**
 * main - print all possible combination of two digits
 *
 * Return: always 1
 */
int main(void)
{
	int n, m, i, j;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 10; j++)
				{
					if ((i + j) > (n + m))
					{
						putchar(n + '0');
						putchar(m + '0');
						putchar(' ');
						putchar(i + '0');
						putchar(j + '0');
						if ((m < 8 || j < 9) || (i < 9 || n < 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
