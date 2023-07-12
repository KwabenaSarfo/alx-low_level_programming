#include "main.h"
/**
 * _puts_recursion - This function like puts();
 * @s: input value
 * Return:0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}