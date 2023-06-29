#include "main.h"
#include <stdio.h>

/**
 * rot13 - This project encoder rot13
 * @z: pointer to string params
 *
 * Return: *z
 */

char *rot13(char *z)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; z[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (z[a] == data1[b])
			{
				z[a] = datarot[b];
				break;
			}
		}
	}
	return (z);
}
