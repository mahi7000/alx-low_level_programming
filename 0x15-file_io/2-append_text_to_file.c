#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of text
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int l = 0;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		l = 0;
		while (text_content[l])
			l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	i = write(fd, text_content, l);

	if (i == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
