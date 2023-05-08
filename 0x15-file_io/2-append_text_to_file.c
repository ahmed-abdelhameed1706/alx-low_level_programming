#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the name to append text to
 * @text_content: text to be appended
 *
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write, f_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[f_len] != '\0')
		{
			f_len++;
		}
	}

	f_open = open(filename, O_WRONLY | O_APPEND);

	if (f_open == -1)
		return (-1);

	f_write = write(f_open, text_content, f_len);

	if (f_write == -1)
		return (-1);

	close(f_open);

	return (1);
}
