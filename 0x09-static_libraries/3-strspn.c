#include "main.h"
/**
 * _strspn - The Entry point
 * @b: input
 * @accepts: input value
 * Return: 0 (Success)
 */
unsigned int _strspn(char *b, char *accepts)
{
	unsigned int m = 0;
	int a;


	while (*b)
	{
		for (a = 0; accepts[a]; a++)
		{
			if (*b == accepts[a])
			{
				m++;
				break;
			}
			else if (accepts[a + 1] == '\0')
				return (m);
		}
		b++;
	}
	return (m);
}
