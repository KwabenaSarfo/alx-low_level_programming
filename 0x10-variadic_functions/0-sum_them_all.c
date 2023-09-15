#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
