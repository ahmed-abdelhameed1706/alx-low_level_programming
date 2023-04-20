#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
