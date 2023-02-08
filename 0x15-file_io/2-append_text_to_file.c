#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: On sucess 1, On failure -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
