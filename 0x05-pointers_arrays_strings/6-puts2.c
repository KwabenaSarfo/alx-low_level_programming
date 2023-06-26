#include "main.h"
/**
 * puts2 - This project function print only one char out of two
 * starting with the first one
 * @r: input
 * Return: print
 */
void puts2(char *r)
{
	int lon = 0;
	int c = 0;
	char *v = r;
	int b;

	while (*v != '\0')
	{
		v++;
		lon++;
	}
	c = lon - 1;
	for (b = 0 ; b <= c ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
