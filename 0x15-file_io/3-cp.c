#include "main.h"
#include <stdio.h>
#include <sys/stat.h>
/**
 * cant_read_error - prints error when can't read
 * @file_from: file name
 * @result: result value
 * Return: nothing
 */
void cant_read_error(const char *file_from, int *result)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	*result = 98;
}
/**
 * cant_write_error - prints error when can't write
 * @file_to: file name
 * @result: result value
 * Return: nothing
 */

void cant_write_error(const char *file_to, int *result)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	*result = 99;
}
/**
 * close_error - prints error when can't close
 * @f: file name
 * @result: result value
 * Return: nothing
 */
void close_error(int f, int *result)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	*result = 100;
}
/**
 * cp - copies from file to another
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: int
 */
int cp(const char *file_from, const char *file_to)
{
	int f_from, f_to, n_read, n_write, result = 0;
	char buffer[BUFFER_SIZE];

	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	f_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((n_read = read(f_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(f_to, buffer, n_read);
		if (n_write != n_read || n_write == -1)
		{
			cant_write_error(file_to, &result);
			break;
		}
	}

	if (n_read == -1)
		cant_read_error(file_from, &result);
	if (close(f_from) == -1)
		close_error(f_from, &result);
	if (close(f_to) == -1)
		close_error(f_from, &result);
	return (result);
}
/**
 * main - using the cp function
 * @argc: parameter
 * @argv: parameter
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int result;

	umask(0);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	result = cp(argv[1], argv[2]);
	return (result);
}
