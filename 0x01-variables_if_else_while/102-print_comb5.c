#include <stdio.h>

/**
 * main - This code prints two two-digit numbers
 * Return : 0
 */

int main(void)
{
	int b, n;

	for (b = 0; b < 100; b++)
	{
		for (n = 0; n < 100; n++)
		{
			if (b < n)
			{
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (b != 98 || n != 99)
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
