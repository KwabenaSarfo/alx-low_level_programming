#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int b, h, u = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (h = 0; av[b][h]; h++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (h = 0; av[b][h]; h++)
	{
		str[u] = av[b][h];
		u++;
	}
	if (str[u] == '\0')
	{
		str[u++] = '\n';
	}
	}
	return (str);
}
