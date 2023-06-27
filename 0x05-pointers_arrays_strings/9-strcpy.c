#include "main.h"

/**
 * char *_strcpy - This project function copies
 * the string pointed to by src
 * @desto: copy too
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *desto, char *src)
{
	int e = 0;
	int b = 0;

	while (*(src + l) != '\0')
	{
		e++;
	}
	for ( ; b < l ; b++)
	{
		dest[b] = src[b];
	}
	desto[l] = '\0';
	return (desto);
}
