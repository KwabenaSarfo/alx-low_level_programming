#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This project nested loop and make grid
 * @width: input
 * @height: input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **yoo;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	yoo = malloc(sizeof(int *) * height);

	if (yoo == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		yoo[a] = malloc(sizeof(int) * width);

		if (yoo[a] == NULL)
		{
			for (; a >= 0; a--)
				free(yoo[a]);

			free(yoo);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			yoo[a][b] = 0;
	}

	return (yoo);
}
