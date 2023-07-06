#include "main.h"

int check_pal(char *s, int b, int lent);
int _strlen_recursion(char *s);

/**
 * is_palindrome - The checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - The checks the characters recursively for palindrome
 * @s: string
 * @b: iterator
 * @lent: length string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int b, int lent)
{
	if (*(s + b) != *(s + lent - 1))
		return (0);
	if (b >= lent)
		return (1);
	return (check_pal(s, b + 1, lent - 1));
}
