#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - This project selects the correct function to perform
* the operation asked by the user.
* @s: operator passed as argument.
*
* Return: A pointer.
*/
	int (*get_op_func(char *s))(int, int)
	{
		op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL},
		};


		int d = 0;


		while (ops[d].op != NULL && *(ops[d].op) != *s)
			d++;


		return (ops[d].f);
	}
