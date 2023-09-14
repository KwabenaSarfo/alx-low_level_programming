#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result,
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num8, num9;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num8 = atoi(argv[1]);
	op = argv[2];
	num9 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num9 == 0) ||
	    (*op == '%' && num9 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num8, num9));

	return (0);
}
