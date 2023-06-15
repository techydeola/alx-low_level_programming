#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Pointer to the new created array (success)
 *         null (failure)
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i, j;

	if (min > max)
		return (NULL);

	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	j = min;

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
