#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory using malloc
 * @b: number of bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *prts;

	prts = malloc(b);

	if (prts == NULL)
		exit(98);

	return (prts);
}
