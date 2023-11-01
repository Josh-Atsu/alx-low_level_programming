#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 d array of integers
 * @grid: the dimentional array
 * @height: height of the grind
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
