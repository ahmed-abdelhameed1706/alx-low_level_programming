#include <stdio.h>

/**
 * print_diagsums - prints sum of numbers
 * @a: parameter
 * @size: size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += a[i * size + j];
	}

	printf("%i, %i\n", sum1, sum2);
}
