#include "main.h"
/**
 * _strpbrk - Entry point
 * @c: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *c, char *accept)
{
		int b;

		while (*c)
		{
			for (b = 0; accept[b]; b++)
			{
			if (*c == accept[b])
			return (c);
			}
		c++;
		}

	return ('\0');
}
