#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate a certain amount of space
 * @b: The amount of space to reserve
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		return ("98");
	}
	return (ptr);
}
