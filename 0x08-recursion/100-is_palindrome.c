#include "main.h"

/**
 * str_length - Return the length of a string.
 *
 * @s: The string to measure.
 *
 * Return: The length of @s.
 */
int str_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_length(s + 1));
}

/**
 * is_palindrome_helper - Check if a substring is a palindrome.
 *
 * @s: The original string.
 * @start: The start index of the substring.
 * @end: The end index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
