#include "main.h"

/**
 * times_table -This code  prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int e, b, o;

	for (e = 0; e < 10; e++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * e;
			if (b == 0)
			{
				_putchar(c + '0');
