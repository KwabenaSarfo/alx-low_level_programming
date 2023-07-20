#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - This project print name using pointer to function
* @name: string to add
* @u: pointer to function
* Return: 0
**/
	void print_name(char *name, void (*u)(char *))
	{
		if (name == NULL || u == NULL)
			return;


		u(name);
	}
