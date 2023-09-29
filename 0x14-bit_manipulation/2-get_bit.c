#include "main.h"

/**
 * get_bit - returns the value index in a decimal number
 * @n: number
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val3;

	if (index > 63)
		return (-1);

	bit_val3 = (n >> index) & 1;

	return (bit_val3);
}
