#include "main.h"
/**
 * _strchr - The Entry point
 * @a: input
 * @d: input
 * Return: 0 (Success)
 */
char *_strchr(char *a, char d)
{
	int i = 0;


	for (; a[i] >= '\0'; i++)
	{
		if (a[i] == d)
			return (&a[i]);
	}
	return (0);
}
