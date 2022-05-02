#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: content to write to created file
 *
 * Return: 1(success) or -1(failure)
 */
int create_file(char *filename, char *text_content)
{
	int length = 0;
	int fd, bytes_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[length])
	{
		length++;
	}
	bytes_w = write(fd, text_content, length);
	if (bytes_w < 0)
		return (-1);
	close(fd);
	return (1);
}
