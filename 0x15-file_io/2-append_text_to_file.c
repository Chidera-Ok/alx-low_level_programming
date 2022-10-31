#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: file name
 * @text_content: null terminated string to write
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		wr = write(fd, text_content, i);
	}
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
