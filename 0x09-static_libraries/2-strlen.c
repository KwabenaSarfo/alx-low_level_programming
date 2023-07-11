#include "main.h"
/**
 * _strlen - The returns the length of a string
 * @d: string value
 * Return: length
 */
int _strlen(char *d)
{
	int longt = 0;


	while (*d != '\0')
	{
		longt++;
		d++;
	}


	return (longt);
}
