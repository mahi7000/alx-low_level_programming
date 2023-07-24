#include "main.h"

/**
 * rev_string - function
 * @s: char
 */

void rev_string(char *s)
{
	int reverse = s[0];
	int l = 0;
	int x;

	while (s[l] != '\0')
	{
		l++;
	}
	for (x = 0; x < l; x++)
	{
		l--;
		reverse = s[x];
		s[x] = s[l];
		s[l] = reverse;
	}
}
