#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - function
 * @format: parameter
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s;
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'c'
				|| format[i] == 'f' || format[i] == 'i' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
