#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @dog3: struct dog to free
 */
void free_dog(dog_t *dog3)
{
	if (dog3)
	{
		free(dog3->name);
		free(dog3->owner);
		free(dog3);
	}
}
