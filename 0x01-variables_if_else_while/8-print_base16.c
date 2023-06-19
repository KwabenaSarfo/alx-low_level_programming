#include <stdio.h>

/**
 * main - This code prints numbers between 0 to 9
 * and also letters between a to f.
 * Return:0
 */

int main(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		putchar(s);
	}
	for (s = 97; s < 103; s++)
	{
		putchar(s);
	}

	putchar('\n');

	return (0);
}
