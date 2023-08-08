#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - the free grid main function
 * @grid: the grid parameter
 * @height: the height parameter function
 * Description: it frees the memory of grid
 * Return: void
 *
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
