#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix
 * @filename: the name of the file to be read
 * @letters: number of letters it should read and write
 *
 * Return: the actual number of letters it could read and write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *output;
	ssize_t f_open, f_read, f_write;

	if (filename == NULL)
		return (0);

	output = malloc(sizeof(char) * letters);

	if (output == NULL)
		return (0);

	f_open = open(filename, O_RDONLY);

	if (f_open == -1)
		return (0);

	f_read = read(f_open, output, letters);

	if (f_read == -1)
		return (0);

	f_write = write(STDOUT_FILENO, output, f_read);

	if (f_write == -1 || f_write != f_read)
		return (0);

	free(output);
	close(f_open);
	return (f_write);
}
