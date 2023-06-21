#include "main.h"

/**
 * print_alphabet_x10 - This code prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int b;

	b = 0;

	while (b < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
