#include "main.h"

/**
 * read_textfile - read text
 * @filename: file name
 * @letters: number of letters
 *
 * Return: letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t file;
	ssize_t i;
	ssize_t j;

	file = open(filename, O-RDONLY);
	if (file == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	j = read(file, ptr, letters);
	i = write(STDOUT_FILENO, ptr, j);

	free(ptr);
	close(file);
	return (i);
}
