#include "main.h"

/**
 * _strcat - Appends two strings
 * @dest: has the first string
 * @src: has string to be append
 *
 * Return: the combination
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int count;
	int m;
	int count2;

	count = 0;
	for (n = 0; dest[n] != '\0'; n++)
		count++;

	m = 0;
	count2 = count;
	while (src[m] != '\0')
	{
		dest[count2] = src[m];
		m++;
		count2++;
	}
	dest[count2] = '\0';
	return (dest);
}
