#include "main.h"

/**
 * jack_bauer - This code print every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int f, b;

	f = 0;

	while (f < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		f++;
	}
}
