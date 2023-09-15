#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string.
 * @n: The number of strings.
 * @...: A variable number.
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str1;
	unsigned int index12;

	va_start(strings, n);

	for (index12 = 0; index12 < n; index12++)
	{
		str1 = va_arg(strings, char *);

		if (str1 == NULL)
			printf("(nil)");
		else
			printf("%s", str1);

		if (index12 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
