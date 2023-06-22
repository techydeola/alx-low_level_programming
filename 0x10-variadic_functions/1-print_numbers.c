#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: pointer to the string to be printed between numbers
 * @n: number of variadic arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int arg;
	va_list ap;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, int);
		printf("%d", arg);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
