#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Joins two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: the concatenated string
 * which is a pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	size_t i, j, k;
	char *s3;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		i++;
		k++;
	}
	j = 0;
	for  (j = 0; s2[j] != '\0'; j++)
	{
		i++;
	}
	s3 = malloc(sizeof(char) * (i + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < k; j++)
	{
		s3[j] = s1[j];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[j + k] = s2[j];
	}
	return (s3);
}
