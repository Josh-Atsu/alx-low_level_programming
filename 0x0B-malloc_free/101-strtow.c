#include "main.h"
#include <stdlib.h>

/**
 * strtow - split all strings into words
 *
 * @str: the string
 * Return: pointer to an array of a string (words)
 */
char **strtow(char *str)
{
	int i, j, count = 0, strlen = 0;
	char **m;

	if (str == NULL || *str == '')
		return (NULL);
	i = 0;
	while (str[i])
	{
		for (; str[i] != ' '; i++)
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				++count;
		}
		i++;
	}
	m = malloc(count * sizeof(char *));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	i = 0, j = 0;
	while (str[i])
	{
		for (; str[i] != ' '; i++)
		{
			strlen += 1;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				m[j] = malloc((strlen + 1) * sizeof(char));
				if (m[j] == NULL)
				{
					for (; j >= 0; j--)
						free(m[j]);
					free(m);
					return (NULL);
				}
				j++;
			}
		}
		i++;
	}
	i = 0, count = 0;
	while (str[i])
	{
		for (; str[i] != ' '; i++)
		{
			j = 0;
			m[count][j++] = str[i];
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (m);
}
