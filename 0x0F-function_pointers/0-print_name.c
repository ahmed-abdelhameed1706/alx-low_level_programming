#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - main function
 * @f: parameter
 * @name: parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return (0);
	}
	(*f)(name);
}
