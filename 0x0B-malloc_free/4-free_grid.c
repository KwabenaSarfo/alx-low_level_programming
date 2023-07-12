#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This project frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int ab;

	for (ab = 0; ab < height; ab++)
	{
		free(grid[ab]);
	}
	free(grid);
}
