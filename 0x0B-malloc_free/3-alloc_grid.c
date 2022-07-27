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
	unsigned int size;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	size = width * height;

	grid = malloc(size * sizeof(int));

	if (grid != NULL)
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
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
