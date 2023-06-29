#include "main.h"
/**
 * leet - This project encode into 1337speak
 * @m: input value
 * Return: m value
 */
char *leet(char *m)
{
	int k, i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; m[i] != '\0'; k++)
	{
		for (i = 0; i < 10; i++)
		{
			if (m[k] == s1[k])
			{
				m[k] = s2[i];
			}
		}
	}
	return (m);
}
