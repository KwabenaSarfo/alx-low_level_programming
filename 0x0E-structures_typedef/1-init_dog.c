#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable.
 * @dog2: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *dog2, char *name, float age, char *owner)
{
	if (dog2 == NULL)
		dog2 = malloc(sizeof(struct dog));
	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;
}
