#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where stored
 *@src: memory where copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int y = n;


	for (; s < y; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
