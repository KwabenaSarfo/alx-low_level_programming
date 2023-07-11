#include "main.h"
/**
 * _strncpy - The copied string
 * @dest: input
 * @src: input
 * @m: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int m)
{
	int b;


	b = 0;
	while (b < m && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < m)
	{
		dest[b] = '\0';
		b++;
	}


	return (dest);
}
