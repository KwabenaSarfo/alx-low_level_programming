#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This project frees memory allocated struct dog
 * @d: struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
