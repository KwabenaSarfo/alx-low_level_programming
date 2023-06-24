#include "main.h"

/**
 * print_numbers -This code prints 0 - 9
 * return: void
 */

void print_numbers(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
