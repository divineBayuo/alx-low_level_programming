#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2-d grid
 *		previously created by alloc_grid
 *
 * @grid: alloc_grid function
 * @height: height of the grid
 *
 * Return: no return (void)
 */

void free_grid(int **grid, int height)
{
	int ind;

	for (ind = 0; ind < height; ind++)
		free(grid[ind]);

	free(grid);
}
