#include <stdlib.h>
#include "main.h"

/**
 * *_memset - This project fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number
 *
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory array
 * @nmeb: number of elements array
 * @size: size
 *
 * Return: pointer for memory
 */
void *_calloc(unsigned int nmeb, unsigned int size1)
{
	char *ptr;

	if (nmeb == 0 || size1 == 0)
		return (NULL);

	ptr = malloc(size1 * nmeb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmeb * size1);

	return (ptr);
}
