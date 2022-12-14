#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: number of letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);

	if (rd == -1)
		return (0);

	buf[letters] = '\0';

	wr = write(1, buf, rd);
	if (wr == -1)
		return (0);

	close(fd);
	free(buf);
	return (wr);
}
