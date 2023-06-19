#include <stdio.h>

/**
 * main -This code three digits
 * Return: 0
 */
int main(void)
{
	int c, d, s;

	for (c = 48; c < 58; c++)
	{
		for (d = 49; d < 58; d++)
		{
			for (s = 50; s < 58; s++)
			{
				if (s > d && d > c)
				{
					putchar(c);
					putchar(d);
					putchar(s);
					if (c != 55 || d != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
