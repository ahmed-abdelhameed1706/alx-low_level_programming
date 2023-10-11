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
	size_t i = 0, steps = sqrt(size), j;

	if (array == NULL)
		return (-1);

	while (i <= size - 1)
	{

		if (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i += steps;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - steps, i);

			for (j = i - steps; j <= i; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}



			/*
			 * printf("Value found between indexes [%ld] and [%ld]\n", i - steps, i);
			 * if (array[i] == value)
			 * {
			 *	return (i);
			 * }
			 * else
			 * {
			 *	i--;
			 * }
			 */
		}
	}
	return (-1);
}
