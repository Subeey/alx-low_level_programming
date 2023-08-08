#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the main function
 * @width: the width parameter function
 * @height: the height parameter function
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **su;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	su = malloc(sizeof(int *) * height);

	if (su == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		su[i] = malloc(sizeof(int) * width);

		if (su[i] == NULL)
		{
			for (; i >= 0; i--)
				free(su[i]);

			free(su);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			su[i][j] = 0;
	}

	return (su);
}
