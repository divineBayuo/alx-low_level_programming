#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer to
 *		a 2 dimensional array of integers
 *
 * @width: width of the 2-d array
 * @height: height of the 2-d array
 *
 * Return: NULL if function fails || width/height <= 0
 */

int **alloc_grid(int width, int height)
{
	int **twodim;
	int ht_ind, wt_ind;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
		return (NULL);

	for (ht_ind = 0; ht_ind < height; ht_ind++)
	{
		twodim[ht_ind] = malloc(sizeof(int) * width);

		if (twodim[ht_ind] == NULL)
		{
			for (; ht_ind >= 0; ht_ind--)
				free(twodim[ht_ind]);

			free(twodim);
			return (NULL);
		}
	}

	for (ht_ind = 0; ht_ind < height; ht_ind++)
	{
		for (wt_ind = 0; wt_ind < width; wt_ind++)
			twodim[ht_ind][wt_ind] = 0;
	}

	return (twodim);
}
