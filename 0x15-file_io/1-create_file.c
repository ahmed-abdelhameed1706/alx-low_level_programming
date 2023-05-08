#include "main.h"

/**
 * create_file - creates a file on different conditions
 * @filename: the name of the file
 * @text_content: what the file contains if any
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, f_write, f_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[f_len] != '\0')
		{
			f_len++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	f_write = write(file, text_content, f_len);

	if (f_write == -1)
		return (-1);

	close(file);

	return (1);
}
