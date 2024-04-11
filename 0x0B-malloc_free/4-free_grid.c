#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to a 2D matrix
 * @grid: the 2D matrix
 * @height: height of the matrix
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
