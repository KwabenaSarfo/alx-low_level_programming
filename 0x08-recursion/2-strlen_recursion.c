#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @c: The string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *c)
{
	int longin = 0;

	if (*c)
	{
		longin++;
		longin += _strlen_recursion(c + 1);
	}

	return (longin);
}
