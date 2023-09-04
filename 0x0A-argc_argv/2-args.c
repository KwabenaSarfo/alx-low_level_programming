#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments receives
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	return (0);
}
