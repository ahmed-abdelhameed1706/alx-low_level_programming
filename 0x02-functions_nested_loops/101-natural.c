#include <stdio.h>
#include "main.h"

/**
 * print_natural_numbers - prints numbers
 * Return: returns nothing
 */
void print_natural_numbers(void)
{
	int sum = 0;
	int j;

	for (j = 0; j < 1024; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			sum += j;
		}
	}
	printf("%i\n", sum);
}
