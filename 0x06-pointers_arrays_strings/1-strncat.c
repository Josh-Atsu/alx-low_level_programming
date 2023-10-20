#include "main.h"

/**
 * _strncat - concatenate certain numbewr of characters
 * @dest: Has the main string to be added
 * @src: Contains string to be concatenated
 * @n: holds the number of characters to concatenate
 *
 * Return: the concatenated string, dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dlen;
	int j;
	int slen;

	dlen = 0;
	for (i  = 0; dest[i] != '\0'; i++)
	{
		dlen++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		slen++;
	}

	j = 0;
	while (j < n)
	{
		dest[dlen] = src[j];
		j++;
		dlen++;
	}
	return (dest);
}
