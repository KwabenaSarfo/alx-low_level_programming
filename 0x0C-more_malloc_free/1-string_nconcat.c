#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int d = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		x = malloc(sizeof(char) * (len1 + n + 1));
	else
		x = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!x)
		return (NULL);

	while (d < len1)
	{
		x[d] = s1[d];
		d++;
	}

	while (n < len2 && d < (len1 + n))
		x[d++] = s2[j++];

	while (n >= len2 && d < (len1 + len2))
		x[d++] = s2[j++];

	x[d] = '\0';

	return (x);
}
