#include "main.h"
/**
 * reverse_array - This project reverse array of integers
 * @a: array
 * @m: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int m)
{
	int k;
	int s;

	for (k = 0; k < m--; k++)
	{
		s = a[k];
		a[k] = a[m];
		a[m] = s;
	}
}
