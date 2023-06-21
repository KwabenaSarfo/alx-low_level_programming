#include <stdio.h>

/**
 * main -This code  prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and a space.
 *
 * Return: 0.
 */
int main(void)
{
	int count;
	unsigned long fic1 = 0, fic2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fic1 + fic2;
		printf("%lu", sum);

		fic1 = fic2;
		fic2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
