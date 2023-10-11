#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function to search sorted array using jump algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index of the value if found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, steps = floor(sqrt(size));

	if (array == NULL)
		return (-1);

	while (i < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] < value)
			i += steps;
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - steps, i);
			if (array[i] == value)
			{
				return (i);
			}
			else
			{
				i--;
			}
		}
	}
	return (-1);
}
