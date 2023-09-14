#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size12: size of elements
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size12, int (*cmp)(int))
{
	int d;

	if (array == NULL || size12 <= 0 || cmp == NULL)
		return (-1);

	for (d = 0; d < size12; d++)
	{
		if (cmp(array[d]))
			return (d);
	}
	return (-1);
}
