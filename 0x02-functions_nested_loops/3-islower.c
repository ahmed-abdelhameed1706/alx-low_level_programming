#include "main.h"

/**
 * _islower - checks if char is lowercase
 *
 * @c: is parameter to be printed
 *
 * Return: 1 if succes 0 if failed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
