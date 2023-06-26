#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *e)
{
	int lon = 0;
	int b;

	while (*e != '\0')
	{
		lon++;
		e++;
	}
	e--;
	for (b = lon; b > 0; b--)
	{
		_putchar(*e);
		e--;
	}

	_putchar('\n');
}
