#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer to a two-dim array of int
 * @width: width of the array
 * @height: height of the array
 * Return: returns pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **gr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gr = (int *)malloc(sizeof(int *) * height);
	if (gr == NULL)
	{
		free(gr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gr[a] = (int *)malloc(sizeof(int) * width);
		if (gr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gr[a]);
			free(gr);
			return (NULL);
		}

	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			gr[a][b] = 0;
	}
	return (gr);
}
