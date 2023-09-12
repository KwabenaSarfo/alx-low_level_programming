#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d5: struct dog to print
 */
void print_dog(struct dog *d5)
{
	if (d5 == NULL)
		return;

	if (d5->name == NULL)
		d5->name = "(nil)";
	if (d5->owner == NULL)
		d5->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d5->name, d5->age, d5->owner);
}
