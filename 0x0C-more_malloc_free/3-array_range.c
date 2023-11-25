#include "main.h"
#include <stdlib.h>
/**
 * array_range - an array from min to max inclusively
 * @min: minimum number
 * @max: maximun number
 * Return: pointer to the allocated space of memory
 */
int *array_range(int min, int max)
{
	int *m;
	int i, numlen;

	if (min > max)
		return (NULL);
	numlen = (max - min) + 1;
	m = malloc(numlen * sizeof(int));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < numlen; i++)
	{
		m[i] = min++;
	}
	return (m);
}
