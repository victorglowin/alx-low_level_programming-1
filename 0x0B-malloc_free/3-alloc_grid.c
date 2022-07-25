#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -Creates two dimensional array of integers
 * @width: the width of the grid,columns
 * @height: the height of the grid, rows
 * Return: NULL on failure, point to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	x = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (x < height)
	{
		grid[x] = malloc(width * sizeof(**grid));
		if (grid[x] == NULL)
		{
			x--;
			while (x >= 0)
			{
				free(grid[x]);
				x--;
			}
			free(grid);
			return (NULL);
		}
		y = 0;
		while (y < width)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
	x = 0;
	return (grid);
}
