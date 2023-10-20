#include "main.h"

/**
 * _strncpy - Copies the a number of string from src to dest
 * @dest: Contains the destination of the string
 * @src: Contains the string to be copiede
 * @n: The number of character to concatenate
 *
 * Return: the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
