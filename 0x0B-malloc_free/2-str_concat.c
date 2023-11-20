#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to a newly allocated space in memory containning s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	m = malloc(sizeof(char) * (len1 + len2 + 1));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
		m[i + j] = s2[j];
	m[i + j] = '\0';
	return (m);
}
