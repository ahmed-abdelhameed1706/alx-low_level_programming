#include "main.h"

/**
 * get_bit - gets the bit at given index
 * @n: parameter
 * @index: index to get bit of
 *
 * Return: 0 or 1 depending on the index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;

	if (n & i)
		return (1);
	else
		return (0);
}
