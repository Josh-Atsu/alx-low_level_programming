#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the socond string but dependant on the number of bytes
 * @n: the number of bytes the s2 should be concartenated
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *str;
	unsigned int len_s2 = 0, len_s1 = 0;

	if (s1 == NULL)
		len_s1 = 0;
	if (s2 == NULL)
		len_s2 = 0;
	for (i = 0; s2[i]; i++)
	{
		len_s2++;
	}
	if (n >= len_s2)
	{
		str = malloc(sizeof(char) * (sizeof(s1) + sizeof(s2) + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (sizeof(s1) + (n + 1)));
	}
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
		len_s1++;
	}
	for (i = 0; i < n; i++)
	{
		if (s2[i] != '\0')
		{
			str[len_s1] = s2[i];
			len_s1++;
		}
	}
	str[len_s1] = '\0';
	return (str);
}
