#include "main.h"

/**
 * rev_string - This project reverse array
 * @m: integer params
 * Return: 0
 */

void rev_string(char *m)
{
	int a = 0;
	int c = 0;
	char temp;

	while (*(m + a) != '\0')
	{
		a++;
	}
	a--;

	for (c = 0; c < a; c++, a--)
	{
		temp = *(m + c);
		*(m + c) = *(m + a);
		*(m + a) = temp;
	}
}

/**
 * infinite_add - In addition of 2 numbers together
 * @m1: text representation of 1st number to add
 * @m2: text representation of 2nd number to add
 * @n: pointer to buffer
 * @size_n: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *m1, char *m2, char *n, int size_n)
{
	int overflow = 0, a = 0, c = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(m1 + a) != '\0')
		a++;
	while (*(m2 + c) != '\0')
		c++;
	a--;
	c--;
	if (c >= size_n || a >= size_n)
		return (0);
	while (c >= 0 || a >= 0 || overflow == 1)
	{
		if (a < 0)
			val1 = 0;
		else
			val1 = *(m1 + a) - '0';
		if (c < 0)
			val2 = 0;
		else
			val2 = *(m2 + c) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_n - 1))
			return (0);
		*(n + digits) = (temp_tot % 10) + '0';
		digits++;
		c--;
		a--;
	}
	if (digits == size_n)
		return (0);
	*(n + digits) = '\0';
	rev_string(n);
	return (n);
}
