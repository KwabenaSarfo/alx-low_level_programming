#include "main.h"
/**
 * print_triangle -This code prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, d;

		for (b = 1; b <= size; b++)
		{
			for (d = b; d < size; d++)
			{
				_putchar(' ');
			}

			for (d = 1; d <= b; d++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
