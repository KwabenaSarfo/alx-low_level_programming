#include "main.h"
/**
 *_memcpy -function that copies memory area
 *@dest: memory where to stored
 *@src: memory where to copied
 *@b: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int b)
{
	int a = 0;
	int i = b;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		b--;
	}
	return (dest);
}
