#include <stdio.h>

/**
 * main- this is the main function
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	char i;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (i ='A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
