#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int e, t = 0;

	if (str == NULL)
		return (NULL);
	e = 0;
	while (str[e] != '\0')
		e++;

	aaa = malloc(sizeof(char) * (e + 1));

	if (aaa == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		aaa[t] = str[t];

	return (aaa);
}
