#include "main.h"
#include <stdlib.h>

/**
 * _strdup - make a duplicate of a string
 *
 * @str: the string to duplicate
 * Return: a pointer to the allocated space
 * that holds the string in memory
 */
char *_strdup(char *str)
{
	int i, count = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count += 1;
	m = malloc(sizeof(char) * (count + 1));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		m[i] = str[i];
	m[count + 1] = '\0';
	return (m);
}
