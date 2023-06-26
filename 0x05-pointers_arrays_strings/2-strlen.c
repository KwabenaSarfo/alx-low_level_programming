#include "main.h"
/**
 * _strlen -This project returns the length of string
 * @t: string
 * Return: length
 */
int _strlen(char *t)
{
	int lon = 0;

	while (*t != '\0')
	{
		lon++;
		t++;
	}

	return (lon);
}
