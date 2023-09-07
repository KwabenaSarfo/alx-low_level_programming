#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @prts: pointer to the memory previsouly allocated
 * @old_size: size that allocated memory for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *prts, unsigned int old_size, unsigned int new_size)
{
	char *prts1;
	char *old_prts;
	unsigned int x;

	if (new_size == old_size)
		return (prts);

	if (new_size == 0 && prts)
	{
		free(prts);
		return (NULL);
	}

	if (!prts)
		return (malloc(new_size));

	prts1 = malloc(new_size);
	if (!prts1)
		return (NULL);

	old_prts = prts;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			prts1[x] = old_prts[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			prts1[x] = old_prts[x];
	}

	free(prts);
	return (prts1);
}
