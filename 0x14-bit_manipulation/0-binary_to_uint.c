#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	char digit;

	if (b == NULL)
		return (0);

	while ((digit = b[i]) != '\0')
	{
		if (digit != '0' && digit != '1')
		{
			return (0);
		}

		result = (result << 1) + (digit - '0');
		i++;
	}

	return (result);
}
