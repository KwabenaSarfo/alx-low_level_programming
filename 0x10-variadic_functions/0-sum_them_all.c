#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - This project returns the sum of all its paramters.
* @n: Number of paramters passed to the function.
* @...: variable number of paramters to calculate the sum of.
*
* Return: 0.
*/
int sum_them_all(const unsigned int n, ...)
	{
		va_list ap;
		unsigned int d, sum = 0;


		va_start(ap, n);


		for (d = 0; d < n; d++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);
	}
