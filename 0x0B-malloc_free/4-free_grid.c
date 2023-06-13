#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 *             by alloc_grid function
 * @grid: first pointer
 * @height: second pointer
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height < 1)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
