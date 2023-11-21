#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the previously allocated memory of a 2D array
 * @grid: pointer to the allocated 2D array of memory
 * @height: number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
