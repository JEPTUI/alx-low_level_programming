#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: On success 1
 *	On failure -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}