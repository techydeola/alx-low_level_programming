#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: format identifier
 *
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;
	va_list ap;

	va_start(ap, format);

	while (ptr != NULL && *ptr != '\0')
	{
		c = *ptr;

		if (c == 'c')
		{
			i = va_arg(ap, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			i = va_arg(ap, int);
			printf("%d", i);
		}
		else if (c == 'f')
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(ap, char *);

			if (s != NULL)
				printf("%s", s);
			else
				printf(", ");
		}

		ptr++;
		if (*ptr != '\0' && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
	}
	printf("\n");

	va_end(ap);
}
