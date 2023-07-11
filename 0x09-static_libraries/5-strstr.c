#include "main.h"
/**
 * _strstr - The Entry point
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *d = needle;


		while (*c == *p && *d != '\0')
		{
			c++;
			d++;
		}


		if (*d == '\0')
			return (haystack);
	}


	return (0);
}
