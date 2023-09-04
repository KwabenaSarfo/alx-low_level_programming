#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;
	int f;


	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	f = 0;
	while (f < n && src[f] != '\0')
	{
	dest[h] = src[f];
	h++;
	f++;
	}
	dest[h] = '\0';
	return (dest);
}
