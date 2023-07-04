#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @b: input
 * @size: input
 * Return: 0 (Success)
 */
void print_diagsums(int *b, int size)
{
	int add1, add2, c;

	add1 = 0;
	add2 = 0;

	for (c = 0; c < size; c++)
	{
		add1 = add1 + b[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		add2 += b[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", add1, add2);
}
