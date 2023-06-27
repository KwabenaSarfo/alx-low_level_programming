#include "main.h"

/**
 * print_array - The project creates a function 
 * that prints n elements of an array
 * @c: array name
 * @e: the number of elements,the array to be printed
 * Return: c and e inputs
 */
void print_array(int *c, int e)
{
	int i;

	for (i = 0; i < (e - 1); i++)
	{
		printf("%d, ", c[i]);
	}
		if (i == (e - 1))
		{
			printf("%d", c[e - 1]);
		}
			printf("\n");
}
