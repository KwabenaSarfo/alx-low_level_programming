#include "main.h"
/**
 * _atoi - convert a string integer.
 *
 * @s: the string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
 	int sign1 = 1, d = 0;
 	unsigned int res = 0;


 	while (!(s[d] <= '9' && s[d] >= '0') && s[d] != '\0')
 	{
 		if (s[d] == '-')
 			sign1 *= -1;
 		d++;
 	}
 	while (s[d] <= '9' && (s[d] >= '0' && s[d] != '\0'))
 	{
 		res = (res * 10) + (s[d] - '0');
 		d++;
 	}
 	res *= sign1;
 	return (res);
 }
