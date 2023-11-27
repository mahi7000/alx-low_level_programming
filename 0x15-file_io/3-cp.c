#include "main.h"

/**
 * _error - function
 * @file_from: file from
 * @file_to: file to
 * @av: string
 *
 */

void _error(int file_from, int file_to, char **av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - function
 * @ac: count
 * @av: string
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int file_to, file_from;
	int rd, wr, cl;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	file_from = open(av[1], O_RDONLY);
	_error(file_from, file_to, av);
	rd = BUFFER_SIZE;
	while (rd == BUFFER_SIZE)
	{
		rd = read(file_from, buffer, BUFFER_SIZE);
		if (rd == -1)
			_error(-1, 0, av);
		wr = write(file_to, buffer, rd);
		if (wr == -1)
			_error(0, -1, av);
	}
	cl = close(file_from);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	cl = close(file_to);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
