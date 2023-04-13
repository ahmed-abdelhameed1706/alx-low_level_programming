#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - main function
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **result;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = (int *)malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(result[j]);

			free(result);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}

	return (result);
}

