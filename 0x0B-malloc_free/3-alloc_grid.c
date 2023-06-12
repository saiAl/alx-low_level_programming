#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: param
 * @height: param
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, cells;

	if (height > 0 || width > 0)
	{
		cells = height * width;
		grid = malloc(sizeof(int *) * cells);

		for (i = 0; i < height; i++)
			grid[i] = malloc(sizeof(int));
	}
	else
		return (NULL);

	if (grid)
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
	else
		return (NULL);

	return (grid);
}
