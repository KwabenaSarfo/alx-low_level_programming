#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, v, q;

	flag = 0;
	q = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		if (s[v] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			q++;
		}
	}

	return (q);
}
/**
 * **strtow - string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, f = 0, leng = 0, words, v = 0, start, end;

	while (*(str + leng))
		leng++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= leng; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (v)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (v + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[f] = tmp - v;
				f++;
				v = 0;
			}
		}
		else if (v++ == 0)
			start = i;
	}

	matrix[f] = NULL;

	return (matrix);
}
