#include "main.h"
/**
 * _strcmp - The compare string values
 * @a1: input
 * @a2: input
 *
 * Return: a1[i] - a2[i]
 */
int _strcmp(char *a1, char *a2)
{
	int c;


	c = 0;
	while (a1[c] != '\0' && a2[c] != '\0')
	{
		if (a1[c] != a2[c])
		{
			return (a1[c] - a2[c]);
		}
	c++;
	}
	return (0);
}
