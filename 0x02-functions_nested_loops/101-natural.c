#include <stdio.h>

/**
 * main - list all natural numbers below 1024
 * Return: 0
 */

int main(void)
{
	int i;
	int r = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			r += i;
	}

	printf("%d\n", r);
	return (0);
}
