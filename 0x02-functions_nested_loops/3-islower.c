#include "main.h"

/**
 * _islower - This code check char is lowercase
 * @chr is to check the char
 * Return: 1 if lowercase, otherwise 0.
 */

int _islower(int chr)
{
	int chr;
	if (chr >= 'a' && chr <= 'z')
		return (1);
	else
		return (0);
}
