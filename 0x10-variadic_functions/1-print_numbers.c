#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers.
 * @separator: The string to the numbers.
 * @n: The number of integers passed in function.
 * @...: A variable number printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index12;

	va_start(nums, n);

	for (index12 = 0; index12 < n; index12++)
	{
		printf("%d", va_arg(nums, int));

		if (index12 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
