#include "main.h"

/**
 * set_bit - sets the bit at given index to 1
 * @n: parameter
 * @index: index to set the bit of to 1
 *
 * Return: -1 or 1 depending on if it worked or not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;

	*n = *n | i;

	return (1);
}
