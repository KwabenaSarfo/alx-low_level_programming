#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to counts number of words in a string
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag1, b, e;

	flag1 = 0;
	e = 0;

	for (b = 0; s[e] != '\0'; b++)
	{
		if (s[e] == ' ')
			flag1 = 0;
		else if (flag1 == 0)
		{
			flag1 = 1;
			e++;
		}
	}

	return (e);
}
/**
 * **strtow - splits string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, b = 0, leng = 0, words, c = 0, start, end;

	while (*(str + leng))
		leng++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= leng; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[b] = NULL;

	return (matrix);
}
