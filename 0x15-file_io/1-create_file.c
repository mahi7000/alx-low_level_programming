#include "main.h"

/**
 * create_file - function
 * @filename: filename
 * @text_content: content of text
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int file, i, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(file, text_content, l);

	if (file == -1 || i == -1)
		return (-1);

	close(file);
	return (1);
}
