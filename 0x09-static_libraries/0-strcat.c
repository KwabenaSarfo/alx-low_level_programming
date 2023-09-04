#include "main.h"
 /**
 * _strcat - concatenates astrings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int d;
	int c;


	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[d] = src[c];
		d++;
		c++;
	}		


	dest[d] = '\0';
	return (dest);
}
