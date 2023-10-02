#include "main.h"

char *a(char *f);
void _close(int fd);

/**
 * a - function
 * @f: name of file buffer
 *
 * Return: pointer
 */

char *a(char *f)
{
	char *c;

	c = malloc(sizeof(char) * 1024);

	if (c == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (c);
}

/**
 * _close - close file
 * @fd: file discriptor
 */

void _close(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function
 * @argc: count
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to;
	int i;
	int j;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	}

	c = a(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, c, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || from == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(c);
			exit(98);
		}

		j = write(to, c, i);
		if (j == -1 || to == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}
		i = read(from, c, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);

	free(c);
	_close(from);
	_close(to);

	return (0);
}
