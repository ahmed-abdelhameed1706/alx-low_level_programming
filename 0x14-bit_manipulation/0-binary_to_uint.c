#include "main.h"

/**
 * _pow - calculated the power of number
 * @base: number to get power of
 * @ex: the power
 *
 * Return: unsigned int
 */

unsigned int _pow(unsigned int base, unsigned int ex)
{
	unsigned int result = 1;
	unsigned int i;

	for (i = ex; i > 0; i--)
		result = result * base;

	return (result);
}

/**
 * binary_to_uint - function to convert biranry to int
 * @b: parameter to be converted
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int length = 0;
	int i, j;
	unsigned int k;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		length++;
	}

	for (i = (length - 1), j = 0; i >= 0; i--, j++)
	{
		k = b[i] - '0';
		result = result + (k * _pow(2, j)); 
	}

	return (result);
}
