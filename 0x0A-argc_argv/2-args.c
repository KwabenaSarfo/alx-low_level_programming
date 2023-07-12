#include <stdio.h>
#include "main.h"

/**
 * main - print
 * @argc: number
 * @argv: array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}

	return (0);
}
