#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This project creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int d, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		ptr[d] = min++;

	return (ptr);
}
