#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to a previously allocated memory of a call to malloc
 * @old_size: the size in bytes allocated to ptr
 * @new_size: the size in bytes of the newly allocated memory
 * Return: the newly aalocated memory and free it
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *optr = ptr;
	size_t i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		max = old_size;
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		p[i] = optr[i];
	}
	free(ptr);
	return (p);
}
