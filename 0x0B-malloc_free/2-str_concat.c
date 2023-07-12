#include "main.h"
#include <stdlib.h>
/**
 * str_concat - This project input and add together for size
 * @a1: input
 * @a2: input
 * Return: a1 and a2
 */
char *str_concat(char *a1, char *a2)
{
	char *conct;
	int d, ai;

	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";

	d = ai = 0;
	while (a1[d] != '\0')
		d++;
	while (a2[ai] != '\0')
		ai++;
	conct = malloc(sizeof(char) * (d + ai + 1));

	if (conct == NULL)
		return (NULL);
	d = ai = 0;
	while (a1[d] != '\0')
	{
		conct[d] = a1[d];
		d++;
	}

	while (a2[ai] != '\0')
	{
		conct[d] = a2[ai];
		d++, ai++;
	}
	conct[d] = '\0';
	return (conct);
}
