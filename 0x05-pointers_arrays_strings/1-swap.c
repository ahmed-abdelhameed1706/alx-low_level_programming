#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: parameter
 * @b: parameter
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
