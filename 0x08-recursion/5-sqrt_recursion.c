#include "main.h"

int actual_sqrt_recursion(int a, int d);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @a: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int a)
{
	if (a < 0)
		return (-1);
	return (actual_sqrt_recursion(a, 0));
}

/**
 * actual_sqrt_recursion - recurses natural
 * square root of a number
 * @a: number to calculate the sqaure root of
 * @d: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int a, int d)
{
	if (d * d > a)
		return (-1);
	if (d * d == a)
		return (d);
	return (actual_sqrt_recursion(a, d + 1));
}
