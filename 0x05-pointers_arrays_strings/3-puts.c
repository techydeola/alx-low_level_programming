#include "main.h"

/**
 * _puts - prints a string followed by new line
 * @str: variable to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
