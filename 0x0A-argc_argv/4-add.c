#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * is_digit - function
 * @str: string
 * Return: 1
 */

int is_digit(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - function
 * @argc: int
 * @argv: pointer to string
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_digit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
