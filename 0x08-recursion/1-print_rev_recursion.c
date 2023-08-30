#include "main.h"
/**
 * _print_rev_recursion -A string in reverse.
 * @c:string.
 */
void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
