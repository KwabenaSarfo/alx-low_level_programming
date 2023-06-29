#include "main.h"
/**
 * _strcmp - This project compare string values
 * @s4: input value
 * @s6: input value
 *
 * Return: s4[i] - s6[i]
 */
int _strcmp(char *s4, char *s6)
{
	int d;

	d = 0;
	while (s4[d] != '\0' && s6[d] != '\0')
	{
		if (s4[d] != s6[d])
		{
			return (s4[d] - s6[d]);
		}
		d++;
	}
	return (0);
}
