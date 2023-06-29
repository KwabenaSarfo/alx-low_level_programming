#include "main.h"
/**
 * _strncat - This project concatenate two strings
 * using at most m bytes from src
 * @dest: input value
 * @src: input value
 * @m: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int m)
{
	int e;
	int b;

	e = 0;
	while (dest[e] != '\0')
	{
		e++;
	}
	b = 0;
	while (b < m && src[b] != '\0')
	{
	dest[e] = src[b];
	e++;
	b++;
	}
	dest[e] = '\0';
	return (dest);
}
