#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int l;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		l = 0;
		while (text_content[l])
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fd, text_content, l);

	if (i == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
