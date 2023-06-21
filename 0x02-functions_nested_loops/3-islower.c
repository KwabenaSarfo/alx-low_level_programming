#include "main.h"

/**
 * _islower - This code check char is lowercase
 * Return: 1 if lowercase, otherwise 0.
 */

int _islower(int h)
{
	if (h >= 'a' && h <= 'z')
		return (1);
	else
		return (0);
}
