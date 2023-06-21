#include "main.h"

/**
 * times_table - This code prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int e, b, o;

	for (e = 0; e < 10; e++)
	{
		for (b = 0; b < 10; b++)
		{
			o = b * e;
			if (b == 0)
			{
				_putchar(o + '0');
			}

			if (o < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			} else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
