#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: file to be read
 * @letters: number of letters in the file
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int length = 0;
	ssize_t bytes_r, bytes_w;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	bytes_r = read(fd, buf, letters);
	bytes_w = write(STDOUT_FILENO, buf, bytes_r);
	if (bytes_w != bytes_r)
		return (0);
	close(fd);
	free(buf);
	return (bytes_w);

}
