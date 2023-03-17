#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
