#include "main.h"

/**
 * print_square -This code prints a square, followed by a new line;
 * @nsize: The new size of the square
 */
void print_square(int nsize)
{
	if (nsize <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (a = 0; a < nsize; a++)
		{
			for (b = 0; b < nsize; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
