#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2-dim grid previously created by alloc_grid
 * @grid: pointer to initially created grid
 * @height: height of the created grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != NULL)
	{
		for (; height >= 0; height--)
			free(grid[height];
		free(grid);
	}
}
