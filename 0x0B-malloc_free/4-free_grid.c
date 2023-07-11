#include"main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *		previously created by your alloc_grid function.
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
