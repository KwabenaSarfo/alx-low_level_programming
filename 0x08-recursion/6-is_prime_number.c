#include "main.h"

int actual_prime(int b, int d);

/**
 * is_prime_number - if an integer is a prime number or not
 * @b: The number to evaluate
 *
 * Return: The 1 if n is a prime number, 0 if not
 */
int is_prime_number(int b)
{
	if (b <= 1)
		return (0);
	return (actual_prime(b, b - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int b, int c)
{
	if (c == 1)
		return (1);
	if (b % c == 0 && c > 0)
		return (0);
	return (actual_prime(b, c - 1));
}
