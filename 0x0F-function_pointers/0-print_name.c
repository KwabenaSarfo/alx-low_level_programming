#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name12: string to add
 * @k: pontier
 * Return: nothing
 **/
void print_name(char *name12, void (*k)(char *))
{
	if (name12 == NULL || k == NULL)
		return;

	k(name12);
}
