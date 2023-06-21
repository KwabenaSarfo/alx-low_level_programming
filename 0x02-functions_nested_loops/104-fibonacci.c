#include <stdio.h>

/**
 * main - Code for fibonacci
 *
 * Return: 0.
 */

int main(void)
{
	unsigned long int c;
	unsigned long int bev = 1;
	unsigned long int ebo = 2;
	unsigned long int k = 1000000000;
	unsigned long int bev1;
	unsigned long int bev2;
	unsigned long int ebo1;
	unsigned long int ebo2;

	printf("%lu", bev);

	for (c = 1; c < 91; c++)
	{
		printf(", %lu", ebo);
		ebo += bev;
		bev = ebo - bev;
	}

	bev1 = (bev / k);
	bev2 = (bev % k);
	ebo1 = (ebo / k);
	ebo2 = (ebo % k);

	for (c = 92; c < 99; ++c)
	{
		printf(", %lu", ebo1 + (ebo2 / k));
		printf("%lu", ebo2 % k);
		ebo1 = ebo1 + bev1;
		bev1 = ebo1 - bev1;
		ebo2 = ebo2 + bev2;
		bev2 = ebo2 - bev2;
	}
	printf("\n");
	return (0);
}
