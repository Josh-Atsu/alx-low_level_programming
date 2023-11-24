#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of array of nmemb elements and size bytes
 * @nmemb: number of elements of the array
 * @size: size of each element
 * Return: pointer to the new allocated space in memiry
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		m[i] = 0;
	return (m);
}
