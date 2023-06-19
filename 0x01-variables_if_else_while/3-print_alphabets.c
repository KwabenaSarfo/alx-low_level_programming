#include <stdio.h>

/**
 * main - This code is to print the alphabet.
 *
 * Return: 0
 */

int main(void)
{
	char b;
	char d;

	b = 'a';
	d = 'A';
	while
		(b <= 'z') {
			putchar(b);
			b++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
