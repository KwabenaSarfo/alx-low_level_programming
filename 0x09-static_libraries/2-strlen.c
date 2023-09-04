#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string value
 * Return: length
 */
int _strlen(char *s)
{
	int longit = 0;


	while (*s != '\0')
	{
		longit++;
		s++;
	}


	return (longit);
}
