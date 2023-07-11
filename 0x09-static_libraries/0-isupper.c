#include "main.h"
/**
 * _isupper - uppercase letters
 * @ch: char
 *
 * Return: 0 or 1
 */
int _isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}
