#include "main.h"
#include <stdlib.h>
/**
 * array_range - print array of the numbers and memory allocate
 * @min: func para
 * @max: func para
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
