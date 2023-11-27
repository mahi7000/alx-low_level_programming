#include "main.h"

/**
 * create_file - function that createsa file
 * @filename: pathe of file
 * @text_content: content to be written
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	wr = write(fd, text_content, sizeof(text_content));

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
