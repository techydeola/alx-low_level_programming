#include "main.h"

/**
 * _isdigit - checks for a dogit (0 through 9)
 * @c: is the argument to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
