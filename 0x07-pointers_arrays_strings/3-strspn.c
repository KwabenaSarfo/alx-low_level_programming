#include "main.h"
/**
 * _strspn - Entry point
 * c: input
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *c, char *accept)
{
	unsigned int n = 0;
	int b;

	while (*c)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*c == accept[b])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		c++;
	}
	return (n);
}
