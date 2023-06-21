#include "main.h"

/**
 * print_sign - This code prints the sign of a number.
 * Return: 1
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	} else if (a == 0)
	{
		_putchar(48);
		return (0);
	} else if (a < 0)
	{
		_putchar('-');
	}
		return (-1);
}
