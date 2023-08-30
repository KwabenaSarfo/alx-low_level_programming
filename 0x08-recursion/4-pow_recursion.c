#include "main.h"

/**
 * _pow_recursion - the value of b raised to the power of d
 * @b: value to raise
 * @d: power
 *
 * Return: result of the power
 */
int _pow_recursion(int b, int d)
{
	if (d < 0)
		return (-1);
	if (d == 0)
		return (1);
	return (b * _pow_recursion(b, d - 1));
}
