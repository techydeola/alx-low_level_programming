#include "main.h"

/**
 * swap_int - a funtion that swaps value of two integers
 * @a: argument to be swapped
 * @b: argument to be swapped
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
