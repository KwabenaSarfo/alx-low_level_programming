#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string in digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count1;

	count1 = 0;
	while (count1 < strlen(str)) /*count1 string*/

	{
		if (!isdigit(str[count1])) /*check if str there are digit*/
		{
			return (0);
		}

		count1++;
	}
	return (1);
}

/**
 * main - Print the name a program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count1;
	int str0_to_int1;
	int sumN = 0;

	count1 = 1;
	while (count1 < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count1]))

		{
			str0_to_int1 = atoi(argv[count1]); /*ATOI --> convert string to int*/
			sumN += str0_to_int1;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count1++;
	}

	printf("%d\n", sumN);

	return (0);
}
