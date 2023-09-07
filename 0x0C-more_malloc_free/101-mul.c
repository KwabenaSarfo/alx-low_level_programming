#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string with non-digit char
 * @s: string to be evaluated
 *
 * Return: 0, 1
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length the string
 * @s: string
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *b1, *b2;
	int leng1, leng2, leng, x, carry, digit1, digit2, *result, c = 0;

	b1 = argv[1], b2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	leng1 = _strlen(b1);
	leng2 = _strlen(b2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (x = 0; x <= leng1 + leng2; x++)
		result[i] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit1 = s1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			digit2 = s2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (digit1 * digit2);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2 + 1] += carry;
	}
	for (x = 0; x < leng - 1; x++)
	{
		if (result[x])
			c = 1;
		if (c)
			_putchar(result[x] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
