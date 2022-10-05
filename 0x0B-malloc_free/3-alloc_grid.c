#include "main.h"

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int l, k;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		grid[l] = malloc(width * sizeof(**grid));

		if (grid[l] == NULL)
		{
			for (l--; l >= 0; l--)
				free(grid[l]);
			free(grid);

			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[l][k] = 0;
	}
	return (grid);
}
