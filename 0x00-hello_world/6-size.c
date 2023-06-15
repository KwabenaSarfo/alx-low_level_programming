#include <stdio.h>
/**
 * main - this program prints the sizes of various types on the computer
 * Return: 0 (on success)
 */
int main(void)
{
	char c;
	int r;
	long int a;
	long long int q;
	float t;

printf("Size of a char: %lu  byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu  byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long int: %lu  byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int: %lu  byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a float: %lu  byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
