#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to stdout
 * @filename: path of file
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * if it can't be opened or read return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t num_read, num_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	num_read = read(fileDescriptor, buffer, letters);
	num_write = write(STDOUT_FILENO, buffer, num_read);

	close(fileDescriptor);

	free (buffer);

	return (num_write);
}
