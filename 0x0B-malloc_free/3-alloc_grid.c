#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function
 * @width: size of array
 * @height: size of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		for (j = 0; j < height; j++)
		{
			if (grid[i] == NULL)
			{
				return (NULL);
				free(grid[i]);
				free(grid);
			}

			else
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
