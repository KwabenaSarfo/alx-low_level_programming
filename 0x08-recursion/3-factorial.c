#include "main.h"

/**
 * factorial - The returns the factorial of a number
 * @d: The number to return the factorial from
 *
 * Return: factorial of d
 */
int factorial(int d)
{
	if (d < 0)
		return (-1);
	if (d == 0)
		return (1);
	return (d * factorial(d - 1));
}
