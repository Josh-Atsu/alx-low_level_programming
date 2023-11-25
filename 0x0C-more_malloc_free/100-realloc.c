#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory of block
 * @ptr: pointer to the previous allocated memory
 * to a call to malloc
 * @old_size: is the size in bytes, of the allocated space ptr
 * @new_size: new space in bytes to allocate to the new block
 *
 * Return: pointer to the new block of memory allocated
 * without initializing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			free(ptr);
		return (ptr);
	}
	else if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			free(m);
	}
	return (m);
}
