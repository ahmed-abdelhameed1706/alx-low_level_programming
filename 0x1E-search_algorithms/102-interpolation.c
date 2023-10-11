#include "search_algos.h"

/**
 * interpolation_search - fucntion to search sorted array
 * @array: array to be searched
 * @size: size of that array
 * @value: value to search for
 * Return: index of value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (value >= array[low] && value <= array[high] && low < high)
	{
		size_t pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}

	return (-1);
}
