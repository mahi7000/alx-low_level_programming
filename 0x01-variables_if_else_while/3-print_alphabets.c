#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char cap[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(cap[i]);
	}

	putchar('\n');
	return (0);
}
