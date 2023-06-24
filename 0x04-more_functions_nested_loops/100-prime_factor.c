#include <stdio.h>
#include <math.h>

/**
 * main -This code finds and prints
 * the largest prime factor the number 612852475143
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	long int a;
	long int max;
	long int d;

a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (d = 3; d <= sqrt(a); d = d + 2)
	{
		while (a % d == 0)
		{
			max = a;
			a = a / d;
		}
	}

	if (a > 2)
		max = a;

	printf("%ld\n", max);

	return (0);
}
