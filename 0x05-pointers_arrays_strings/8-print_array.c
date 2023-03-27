#include "main.h"
#include <stdio.h>

/**
 * print_array - main
 * @a: param
 * @n: param
 * return: nothing
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
		{
			printf("%i, ", a[j]);
		}
		else
		{
			printf("%i", a[j]);
		}
	}
	printf("\n");
}
