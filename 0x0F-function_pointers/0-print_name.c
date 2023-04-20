#include "function_pointers.h"

/**
 * print_name - main function
 * @f: parameter
 * @name: parameter
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
