#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - This project allocates memory using malloc
 * @b: number of bytes
 *
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
