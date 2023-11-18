#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	int i;
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');
	return (0);
}
