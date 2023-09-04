#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * make change for an amount of money
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int numb, k, result;
	int coins1[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	result = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && numb >= 0; k++)
	{
		while (numb >= coins1[k])
		{
			result++;
			numb -= coins1[k];
		}
	}

	printf("%d\n", result);
	return (0);
}
