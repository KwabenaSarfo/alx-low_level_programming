#include "main.h"
/**
* _atoi - convert a string into an integer
* @c: the string
*
* Return: integer.
*/
int _atoi(char *c)
{
int sign = 1, i = 0;
	unsigned int resi = 0;
while (!(c[i] <= '9' && c[i] >= '0') && c[i] != '\0')
	{
	if (c[i] == '-')
sign *= -1;
i++;
	}
	while (c[i] <= '9' && (c[i] >= '0' && c[i] != '\0'))
	{
	resi = (resi * 10) + (c[i] - '0');
	i++;
	}
	resi *= sign;
	return (resi);
}
