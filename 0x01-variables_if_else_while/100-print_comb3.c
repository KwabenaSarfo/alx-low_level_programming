#include <stdio.h>

/**
 * main - This code prints two digits.
 * Return: 0
 */
int main(void)
{
	int e, b;

	for (e = 48; e <= 56; e++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > e)
			{
				putchar(e);
				putchar(b);
				if (e != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
