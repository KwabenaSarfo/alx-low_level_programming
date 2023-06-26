#include "main.h"
/**
 * _puts -This project prints a string, followed by new line
 * to stdout
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
