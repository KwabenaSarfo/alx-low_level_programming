#include "main.h"

/**
 * print_diagonal -This code draws a diagonal line on the terminal
 * @a: number of times the char should be printed
 */

void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int d, c;

		for (d = 0; d < a; d++)
		{
			for (c = 0; c < d; c++)
			{
				if (c == d)
					_putchar('\\');
				else if (d < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
