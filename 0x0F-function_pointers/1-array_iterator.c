#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size3: elem to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size3, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size3; k++)
	{
		action(array[k]);
	}
}
