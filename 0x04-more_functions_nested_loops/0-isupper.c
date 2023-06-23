#include "main.h"

/**
 * _isupper - This project write uppercase letters
 * @a:the char check
 *
 * Return: 0
 */

int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}
