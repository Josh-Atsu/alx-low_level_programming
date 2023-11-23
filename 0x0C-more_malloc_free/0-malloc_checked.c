#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory of n bytes
 * @n: number of bytes
 *
 * Return: pointer to the memory space
 */
void *malloc_checked(unsigned int n)
{
	char *m;

	if (n == 0)
		exit(98);
	m = malloc(n);
	if (m == NULL)
	{
		free(m);
		exit(98);
	}
	return (m);
}
