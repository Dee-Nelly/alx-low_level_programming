#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to the 2D array or NULL upon failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j, len;

	len = width * height;

	if (len == 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
