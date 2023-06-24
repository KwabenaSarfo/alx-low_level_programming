#include "main.h"

/**
 * print_line -This code draws a straight line in the terminal
 * @e: number of times the character should be printed
 */
void print_line(int e)
{
	if (e <= 0)
	{
		_putchar('\n');
	} else
	{
		int d;

		for (d = 1; d <= n; d++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
