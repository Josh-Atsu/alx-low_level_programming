#include <stdio.h>

/**
 * main - The headstart of the progarm
 *
 * Return: - 0 if successful
 */

int main(void)
{
	char s;
	char c;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
