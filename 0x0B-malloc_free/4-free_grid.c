#include "main.h"
#include <stdlib.h>

/**
 * free_grid - main funtion
 * @grid: parameter
 * @height: parameter
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

