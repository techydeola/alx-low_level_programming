#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the variable storing the string
 */

void print_rev(char *s)
{
	size_t len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
