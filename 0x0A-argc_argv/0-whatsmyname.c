#include <stdio.h>
#include "main.h"

/**
 * main - print the number
 * @args: number
 * @argf: array
 *
 * Return: Always 0 (Success)
 */

int main(int args, char *argf[])
{
(void) argf; /*Ignore argf*/
	printf("%d\n", args - 1);

	return (0);
}
