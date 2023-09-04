#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string
 *
 * Return: int converted string
 */
int _atoi(char *s)
{
	int a, b, n, leng, k, digit1;

	a = 0;
	b = 0;
	n = 0;
	leng = 0;
	k = 0;
	digit1 = 0;

	while (s[leng] != '\0')
		leng++;

	while (a < leng && k == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit1 = s[a] - '0';
			if (b % 2)
				digit1 = -digit1;
			n = n * 10 + digit1;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0, 1
 */
int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}
