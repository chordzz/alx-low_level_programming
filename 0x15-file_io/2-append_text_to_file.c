#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of file
 * @text_content: text to append to file
 *
 * Return: 1(success) or -1(failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_w, length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
		bytes_w = write(fd, text_content, length);
		if (bytes_w < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
