#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-D grid previouslycreated by,
 * my alloc_grid function
 * @grid: 2-D array of integers
 * @height: height of the 2D array or grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
