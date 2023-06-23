#include "main.h"

/**
 * _isdigit -This code check if numbers are 0 to 9
 * @b: check
 *
 * Return: 0
 */

int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (1);
	else
		return (0);
}
