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
	int d, size1;

	if (min > max)
		return (NULL);

	size1 = max - min + d;

	ptr = malloc(sizeof(int) * size1);

	if (ptr == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		ptr[d] = min++;

	return (ptr);
}
