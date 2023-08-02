#include "main.h"
/**
 * _strcat -two strings
 * @dest: input
 * @src: input
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int h;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[a] = src[h];
		a++;
		h++;
	}

	dest[a] = '\0';
	return (dest);
}
