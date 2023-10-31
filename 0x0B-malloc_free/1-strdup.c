#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the string and
 * return a pointer a newly allocated space in memory
 * @str: the string to duplicate
 *
 * Return: the newly assigned string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int n;

	n = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	s = malloc(sizeof(char) * (n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
