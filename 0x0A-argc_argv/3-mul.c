#include <stdio.h>
#include "main.h"

/**
 * _atoi - The project converts a string to an integer
 * @c: string to be converted
 *
 * Return: the int
 */
int _atoi(char *c)
{
	int d, e, f, leng, h, digits;

	d = 0;
	e = 0;
	f = 0;
	leng = 0;
	h = 0;
	digits = 0;

	while (c[leng] != '\0')
		leng++;

	while (d < leng && h == 0)
	{
		if (c[d] == '-')
			++e;

		if (c[d] >= '0' && c[d] <= '9')
		{
			digits = c[d] - '0';
			if (e % 2)
				digits = -digits;
			f = f * 10 + digits;
			h = 1;
			if (c[d + 1] < '0' || c[d + 1] > '9')
				break;
			h = 0;
		}
		d++;
	}

	if (h == 0)
		return (0);

	return (f);
}

/**
 * main - multiplies of two numbers
 * @argc: number
 * @argv: array
 *
 * Return: 0 (Success), 1 (Error)
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
