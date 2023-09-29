#include "main.h"

/**
 * print_binary - prints the binary decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, counter = 0;
	unsigned long int current1;

	for (k = 63; k >= 0; k--)
	{
		current1 = n >> k;

		if (current1 & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
