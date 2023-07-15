#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - Project checks if a string contains a non-digit char
 * @s: string
 *
 * Return: 0
 */
int is_digit(char *s)
{
	int b = 0;

	while (s[b])
	{
		if (s[b] < '0' || s[b] > '9')
			return (0);
		b++;
	}
	return (1);
}

/**
 * _strlen - Project returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Project multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int leng1, leng2, leng, b, carry, digit2, digit3, *result, a = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(a2))
		errors();
	leng1 = _strlen(a1);
	leng2 = _strlen(a2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (b = 0; b <= leng1 + leng2; b++)
		result[b] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit2 = a1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(a2) - 1; leng2 >= 0; leng2--)
		{
			digit3 = a2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (digit2 * digit3);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] += carry;
	}
	for (b = 0; b < leng - 1; b++)
	{
		if (result[b])
			a = 1;
		if (a)
			_putchar(result[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
