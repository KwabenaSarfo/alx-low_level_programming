#include "main.h"
/**
 * _strncpy - This project copys a string
 * @dest: input value
 * @src: input value
 * @m: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int m)
{
	int d;

	d = 0;
	while (d < m && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < m)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
