#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: parameter
 * @size: paramter
 * @action: parameter
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
