#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t n;
	ssize_t m;
	char *c;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	m = read(fd, c, letters);
	n = write(STDOUT_FILENO, c, m);

	free(c);

	close(fd);
	return (n);
}
