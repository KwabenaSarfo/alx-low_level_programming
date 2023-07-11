#include "main.h"
/**
 * _strpbrk - The Entry point
 * @b: input
 * @accepts: input
 * Return: 0
 */
char *_strpbrk(char *b, char *accepts)
{
	int d;


	while (*b)
	{
		for (d = 0; accepts[d]; d++)
		{
		if (*b == accepts[d])
		return (b);
		}
	b++;
	}


return ('\0');
}
