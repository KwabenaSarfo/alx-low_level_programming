#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int numb, c, results;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	results = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (c = 0; c < 5 && numb >= 0; c++)
	{
		while (numb >= coins[c])
		{
			results++;
			numb -= coins[c];
		}
	}

	printf("%d\n", results);
	return (0);
}
