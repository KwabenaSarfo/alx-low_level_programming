#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dim.
 */
int **alloc_grid(int width, int height)
{
	int **meee;
	int r, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	meee = malloc(sizeof(int *) * height);

	if (meee == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		meee[r] = malloc(sizeof(int) * width);

		if (meee[r] == NULL)
		{
			for (; r >= 0; r--)
				free(meee[r]);

			free(meee);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		for (s = 0; s < width; s++)
			meee[r][s] = 0;
	}

	return (meee);
}
