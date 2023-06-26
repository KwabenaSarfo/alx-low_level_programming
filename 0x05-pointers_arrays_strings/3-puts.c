#include "main.h"
/**
 * _puts -This project prints a string, followed by new line
 * to stdout
 * @s: string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
