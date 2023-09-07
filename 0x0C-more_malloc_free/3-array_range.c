#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *prts;
	int x, size1;

	if (min > max)
		return (NULL);

	size1 = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (prts == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (prts);
}
