#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string of digit
 * @stri: array
 *
 * Return: Always 0 (Success)
 */
int check_num(char *stri)
{
	/*Declare variables*/
	unsigned int countr;

	countr = 0;
	while (countr < strlen(stri)) /*count string*/

	{
		if (!isdigit(stri[countr])) /*check if stri there are digit*/
		{
			return (0);
		}

		countr++;
	}
	return (1);
}

/**
 * main - Print the name
 * @argc: Count
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int countr;
	int stri_to_int;
	int sum = 0;

	countr = 1;
	while (countr < argc)
	{
		if (check_num(argv[countr]))

		{
			stri_to_int = atoi(argv[countr]);
			sum += stri_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		countr++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
