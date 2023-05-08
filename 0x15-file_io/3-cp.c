#include "main.h"
#include <stdio.h>

char *buf(char *f);
void f_close(int f);

/**
 * buf - creates buffer
 * @f: file name
 *
 * Return: buffer
 */
char *buf(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buffer);
}

/**
 * f_close - closes the file
 * @f: the file to be closed.
 */
void f_close(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - copies file to another
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, n_read, n_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_f_from file_f_to\n");
		exit(97);
	}

	buffer = buf(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	n_read = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read f_from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		n_write = write(f_to, buffer, n_read);
		if (f_to == -1 || n_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write f_to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		n_read = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (n_read > 0);

	free(buffer);
	f_close(f_from);
	f_close(f_to);

	return (0);
}
