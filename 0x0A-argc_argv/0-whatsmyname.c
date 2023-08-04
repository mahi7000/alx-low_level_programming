#include <stdio.h>
#include "main.h"

/**
 * main - function
 * 
 * @argv: array of pointer to string
 * Return: 0 (Success)
 */

int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
