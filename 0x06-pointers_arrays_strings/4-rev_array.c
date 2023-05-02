#include "main.h"

/**
 * reverse_array - a funtion that reverses the content of an array.
 * @a: a pointer to an array
 * @n: number of elements of the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
