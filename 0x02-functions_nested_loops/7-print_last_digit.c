#include "main.h"

/**
 * print_last_digit -This code  prints last digit of a number
 * @n: is the int to extract the last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int f;

	if (n < 0)
	n = -n;

	f = n % 10;

	if (f < 0)
		f = -f;

	_putchar(f + '0');

	return (f);
}
