#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension grid
 * Description: frees memory grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
