#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Project reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size allocated memory for ptr
 * @new_size: new size
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *old_ptr;
	unsigned int d;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (d = 0; d < new_size; d++)
			ptr2[d] = old_ptr[d];
	}

	if (new_size > old_size)
	{
		for (d = 0; d < old_size; d++)
			ptr2[d] = old_ptr[d];
	}

	free(ptr);
	return (ptr2);
}
