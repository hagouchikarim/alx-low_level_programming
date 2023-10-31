#include <stdlib.h>

/**
 * free_grid - frees 2D of Alloc_grid
 * @grid: 2d grid
 * @height: height array
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

