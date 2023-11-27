#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path of the file
 * @text_content: content of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, nletters;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	nletters = 0;
	while (text_content[nletters])
		nletters++;

	wr = write(fd, text_content, nletters);

	if (wr == -1)
		return (-1);

	close (fd);

	return (1);
}
