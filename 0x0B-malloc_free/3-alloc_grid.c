#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: the number of columns
 * @height: the number of rows
 * Return: the dimension
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
