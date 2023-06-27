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

	while (*(src + e) != '\0')
	{
		e++;
	}
	for ( ; b < e ; b++)
	{
		desto[b] = src[b];
	}
	desto[e] = '\0';
	return (desto);
}
