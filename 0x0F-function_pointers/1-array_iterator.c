#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - This project prints each array elem on a newline
* @array: array
* @size: elem to print
* @action: pointer to print in regular
* Return: void
*/
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int d;

		if (array == NULL || action == NULL)
			return;

		for (d = 0; d < size; d++)
		{
			action(array[d]);
		}
	}
