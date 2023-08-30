#include "main.h"

/**
 * factorial - factorial of a number
 * @b: number factorial
 *
 * Return: factorial b
 */
int factorial(int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (b * factorial(b - 1));
}
