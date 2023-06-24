#include "main.h"

/**
 * more_numbers -This code print more numbers
 */

void more_numbers(void)
{
	int a, d;

	for (a = 1; a <= 10; a++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
				_putchar('1');
			_putchar (d % 10 + '0');
		}
		_putchar('\n');
	}
}
