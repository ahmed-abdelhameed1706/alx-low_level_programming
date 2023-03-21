#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 *
 * @n: parameter to be used
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%i\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
}
