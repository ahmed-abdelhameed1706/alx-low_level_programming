#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searches a sorted array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, middle, i;


	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		middle = floor((low + high) / 2);

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
			printf("%i%s", array[i], (i != high) ? ", " : "\n");

		if (array[middle] == value)
			return (middle);

		else if (array[middle] > value)
			high = middle - 1;
		else if (array[middle] < value)
			low = middle + 1;
	}

	return (-1);
}
