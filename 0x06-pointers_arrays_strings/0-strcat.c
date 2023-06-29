#include "main.h"
/**
 * _strcat - This project concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int d;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[a] = src[d];
		a++;
		d++;
	}

	dest[a] = '\0';
	return (dest);
}
