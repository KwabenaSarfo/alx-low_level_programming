#include "main.h"
/**
 * _strlen_recursion - The length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit12 = 0;

	if (*s)
	{
		longit12++;
		longit12 += _strlen_recursion(s + 1);
	}

	return (longit12);
}
