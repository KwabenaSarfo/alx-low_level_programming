#include "main.h"
/**
 *_memcpy - The function that copies memory area
 *@dest: memory stored
 *@src: memory copied
 *@m: number of bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int m)
{
	int c = 0;
	int i = n;


	for (; c < i; c++)
	{
		dest[c] = src[c];
		m--;
	}
	return (dest);
}
