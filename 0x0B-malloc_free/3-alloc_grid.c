#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, cells;

	cells = height * width;
	grid = malloc(sizeof(int**) * cells);

	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (grid);
}
