#include "main.h"
/**
 * _strchr - Entry point
 * @d: input
 * @b: input
 * Return: 0 (Success)
 */
char *_strchr(char *d, char b)
{
	int i = 0;

	for (; d[i] >= '\0'; i++)
	{
		if (d[i] == b)
			return (&d[i]);
	}
	return (0);
}
