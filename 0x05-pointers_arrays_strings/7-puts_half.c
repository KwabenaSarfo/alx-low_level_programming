#include "main.h"
/**
 * puts_half -This project create a function that
 * prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int d, m, lon;

	lon = 0;

	for (d = 0; str[d] != '\0'; d++)
		lon++;

	m = (lon / 2);

	if ((lon % 2) == 1)
		m = ((lon + 1) / 2);

	for (d = m; str[d] != '\0'; d++)
		_putchar(str[d]);
	_putchar('\n');
}
