#include "main.h"

/**
 * cap_string - This project capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index1 = 0;

	while (str[index1])
	{
		while (!(str[index1] >= 'a' && str[index1] <= 'z'))
			index1++;

		if (str[index1 - 1] == ' ' ||
		    str[index1 - 1] == '\t' ||
		    str[index1 - 1] == '\n' ||
		    str[index1 - 1] == ',' ||
		    str[index1 - 1] == ';' ||
		    str[index1 - 1] == '.' ||
		    str[index1 - 1] == '!' ||
		    str[index1 - 1] == '?' ||
		    str[index1 - 1] == '"' ||
		    str[index1 - 1] == '(' ||
		    str[index1 - 1] == ')' ||
		    str[index1 - 1] == '{' ||
		    str[index1 - 1] == '}' ||
		    index1 == 0)
			str[index1] -= 32;

		index1++;
	}

	return (str);
}
