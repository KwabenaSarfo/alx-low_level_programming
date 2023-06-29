#include "main.h"

/**
 * print_number - This project print numbers chars
 * @m: integer params
 * Return: 0
 */

void print_number(int m)
{
	unsigned int m1;

	m1 = m;

	if (m < 0)
	{
		_putchar('-');
		m1 = -m;
	}

	if (m1 / 10 != 0)
	{
		print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
