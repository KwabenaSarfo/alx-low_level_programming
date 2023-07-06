#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @c: The value to raise
 * @d: The power
 *
 * Return: result of the power
 */
int _pow_recursion(int c, int d)
{
	if (d < 0)
		return (-1);
	if (d == 0)
		return (1);
	return (c * _pow_recursion(c, d - 1));
}
