#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer variable holding the string
 */

void puts_half(char *str)
{
	size_t len = strlen(str);
	int n = (len - 1) / 2;
	float x = (len - 1) % 2;
	int y = len - 2;
	int z = len;

	n += 1;

	for (n = n; n <= z; n++)
	{
		_putchar(str[n]);
	}
	if (x == 1.0)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
