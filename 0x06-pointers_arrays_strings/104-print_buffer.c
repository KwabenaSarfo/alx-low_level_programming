#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This project prints buffer
 * @d: buffer
 * @nsize: size
 * Return: void
 */

void print_buffer(char *d, int nsize)
{
	int k, s, a;

	k = 0;

	if (nsize <= 0)
	{
		printf("\n");
		return;
	}
	while (k < nsize)
	{
		s = nsize - k < 10 ? nsize - k : 10;
		printf("%08x: ", k);
		for (a = 0; a < 10; a++)
		{
			if (a < s)
				printf("%02x", *(d + k + a));
			else
				printf("  ");
			if (a % 2)
			{
				printf(" ");
			}
		}
		for (a = 0; a < s; a++)
		{
			int c = *(d + k + a);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
