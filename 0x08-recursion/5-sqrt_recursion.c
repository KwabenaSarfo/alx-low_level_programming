#include "main.h"

int actual_sqrt_recursion(int b, int e);

/**
 * _sqrt_recursion - The returns the natural square root of a number
 * @b: number to calculate the square root of
 *
 * Return: The resulting square root
 */
int _sqrt_recursion(int b)
{
	if (b < 0)
		return (-1);
	return (actual_sqrt_recursion(b, 0));
}

/**
 * actual_sqrt_recursion - The recurses to find the natural
 * square root of a number
 * @b: The number to calculate the sqaure root of
 * @e: The iterator
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int b, int e)
{
	if (e * e > b)
		return (-1);
	if (e * e == b)
		return (e);
	return (actual_sqrt_recursion(b, e + 1));
}
