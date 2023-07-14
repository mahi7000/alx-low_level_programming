#include <stdio.h>
/**
 * main - function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 27; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
