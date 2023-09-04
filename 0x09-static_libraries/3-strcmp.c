#include "main.h"
/**
 * _strcmp - string values
 * @s1: input
 * @s2: input
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int u;


	u = 0;
	while (s1[u] != '\0' && s2[u] != '\0')
	{
		if (s1[u] != s2[u])
		{
			return (s1[u] - s2[u]);
		}
	u++;
	}
	return (0);
}
