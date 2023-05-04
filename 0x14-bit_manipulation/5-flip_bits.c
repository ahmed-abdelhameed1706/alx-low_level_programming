#include "main.h"

/**
 * flip_bits - gets number of bits i need to flip to
 * change one number to another
 * @n: one number
 * @m: number to compare to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int k = n ^ m;

	while (k)
	{
		count = count + (k & 1);
		k = k >> 1;
	}
	return (count);
}
