#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copying from one pointer to another
 * @dest: receives the copied text
 * @src: contains the string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
