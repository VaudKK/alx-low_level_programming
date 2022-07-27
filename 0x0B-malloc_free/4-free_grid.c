#include <stdlib.h>

/**
 * free_grid - frees the 2d array
 * @grid: the grid to be freed
 * @height: the no of rows
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
