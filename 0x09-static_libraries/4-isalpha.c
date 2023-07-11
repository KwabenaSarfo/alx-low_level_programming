#include "main.h"
/**
 * _isalpha - The checks for alphabetic character
 * @a: the character to be checked
 * Return: 0
 */
int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
