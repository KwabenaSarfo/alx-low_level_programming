#include <stdio.h>

/**
 * main -This code finds and prints the sum even-valued terms
 * Return: 0
 */
int main(void)
{
	int b;
	unsigned long int a, d, new, sum;

	a = 1;
	d = 2;
	sum = 0;

	for (b = 1; b <= 33; ++b)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		new = a + d;
		a = d;
		d = new;
	}

	printf("%lu\n", sum);

	return (0);
}
