#include <stdio.h>

/**
 * main - function
 *
 * Return - 0 (Success)
 */

int main(void)
{
	char digit[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(digit[i]);
	}
	putchar('\n');
	return (0);
}
