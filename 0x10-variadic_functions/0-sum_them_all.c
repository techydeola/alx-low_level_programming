#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns sum of all its parameters
 * @n: number of variadic arguments
 * @...: all arguments
 *
 * Return: if n == 0 (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	int arg, sum = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		sum += arg;
	}
	return (sum);
}
