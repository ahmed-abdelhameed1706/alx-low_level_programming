#include "main.h"
#include <stdlib.h>

/**
 * *array_range - main function
 * @min: parameter
 * @max: parameter
 * Return: int
 */
int *array_range(int min, int max)
{
	int *result;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	result = malloc(len * sizeof(int));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
