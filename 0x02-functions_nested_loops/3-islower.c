#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: Always 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
