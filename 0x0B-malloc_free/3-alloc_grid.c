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
	for (i = 0; i < height; i++)
	{
		m = malloc(sizeof(int));
		if (m == NULL)
		{
			while (i >= 0)
			{
				free(m);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			m[j] = malloc(sizeof(int));
			if (m[j] == NULL)
			{
				while (i >= 0)
				{
					free(m[j]);
					free(m);
					i--, j--;
				}
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
