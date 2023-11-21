#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates memory of a 2 - dimentional array of space
 * and initializes it with zero
 *
 * @height: height of the array
 * @width: width of the array
 * Return: a pointer to a two dimentional array of memory
 * or NULL
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int) * height);
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);
		if (m == NULL)
		{
			for (; i >= 0; i--)
			{
				free(m[i]);
				free(m);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
