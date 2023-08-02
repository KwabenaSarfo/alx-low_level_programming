#include "main.h"
/**
 * _memset - To fill a block of memory with a specific value
 * @s: To starting address of memory to be filled
 * @d: the desired value
 * @m: The number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
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
