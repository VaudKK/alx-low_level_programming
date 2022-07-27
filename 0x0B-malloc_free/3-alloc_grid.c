#include <stdlib.h>

/**
 * alloc_grid - allocate grid
 * @width: the width
 * @height: the height
 *
 * Return: initialized grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(*grid[i]));
	}

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}

		return (grid);
	}
	else
	{
		free(grid);
		return (NULL);
	}
}
