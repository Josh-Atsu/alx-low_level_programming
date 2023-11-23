#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string but dependant on n bytes
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to the allocated memory space
 * that has the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j, strlen1, strlen2, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strlen1 = strlen(s1);
	strlen2 = n;
	if (n >= strlen(s2))
		strlen2 = strlen(s2);
	m = malloc((strlen1 + strlen2 + 1) * sizeof(char));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		m[k++] = s1[i];
	for (j = 0; j < strlen2; j++)
		m[k++] = s2[j];
	m[k] = '\0';
	return (m);
}
