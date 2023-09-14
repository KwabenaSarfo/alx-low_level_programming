#include "3-calc.h"

int op_add(int d, int e);
int op_sub(int d, int e);
int op_mul(int d, int e);
int op_div(int d, int e);
int op_mod(int d, int e);

/**
 * op_add - Returns the sum of the two numbers.
 * @d: The first number.
 * @e: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int d, int e)
{
	return (d + e);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @d: The first number.
 * @e: The second number.
 *
 * Return: The difference of d and e.
 */
int op_sub(int d, int e)
{
	return (d - e);
}
/**
 * op_mul - Returns the product of the two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int d, int e)
{
	return (d * e);
}
/**
 * op_div - Returns the division of two numbers.
 * @d: The first number.
 * @e: The second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int d, int e)
{
	return (d / e);
}
/**
 * op_mod - Returns the remainder of the two numbers.
 * @d: The first number.
 * @e: The second number.
 *
 * Return: The remainder of the division of d by e.
 */
int op_mod(int d, int e)
{
	return (d % e);
}
