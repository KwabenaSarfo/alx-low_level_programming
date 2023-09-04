#include "main.h"
		
/**
 * char *_strcpy - a function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int k = 0;


	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; k < d ; k++)
	{
		dest[k] = src[k];
	}
	dest[d] = '\0';
	return (dest);
}
