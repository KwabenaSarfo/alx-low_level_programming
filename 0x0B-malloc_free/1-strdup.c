#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This project duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int b, s = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		aaa[s] = str[s];

	return (aaa);
}
