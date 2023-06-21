#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -This code  prints natural numbers from n to 98
 * @n: print from this number
 */
void print_to_98(int n)
{
	int a, d;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	} else if (n >= 98)
	{
		for (d = n; d >= 98; d--)
		{
			if (d != 98)
				printf("%d, ", d);
			else if (d == 98)
				printf("%d\n", d);
		}
	}
}
