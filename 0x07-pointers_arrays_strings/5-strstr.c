#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *b = haystack;
		char *d = needle;

		while (*b == *d && *d != '\0')
		{
			b++;
			d++;
		}

		if (*d == '\0')
			return (haystack);
	}

	return (0);
}
