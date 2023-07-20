#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*
*/
	void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strings;
		char *str;
		unsigned int index1;


		va_start(strings, n);


		for (index1 = 0; index1 < n; index1++)
		{
			str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


			if (index1 != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strings);
	}
