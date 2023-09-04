#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: address of memory to be filled
 * @b: desired value
 * @n: number of bytes
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;


	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
