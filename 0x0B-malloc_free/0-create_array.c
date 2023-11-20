#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and initializes malloc
 * with a specific character
 * @size: number of bytes to allocare
 * @c: the character to initialize
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
		return (NULL);
	m = malloc(sizeof(char) * size);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return (m);
}
