#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * and returns a pointer to the allocated memory
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = 0;
	return (ptr);
}
