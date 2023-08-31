#include "main.h"

/**
 * wildcmp - strings
 * @s8: pointer to string
 * @s4: pointer to string
 * Return: 0
 */

int wildcmp(char *s8, char *s4)
{
	if (*s8 == '\0')
	{
		if (*s4 != '\0' && *s4 == '*')
		{
			return (wildcmp(s8, s4 + 1));
		}
		return (*s4 == '\0');
	}

	if (*s4 == '*')
	{
		return (wildcmp(s8 + 1, s4) || wildcmp(s8, s4 + 1));
	}
	else if (*s8 == *s4)
	{
		return (wildcmp(s8 + 1, s4 + 1));
	}
	return (0);
}
