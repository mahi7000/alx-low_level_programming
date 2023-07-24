#include "main.h"

/**
 * _atoi - function
 * @s: pointer
 */

int _atoi(char *s)
{
	int a, b, c, l, d, e;

	a = 0;
	b = 0;
	c = 0;
	l = 0;
	d = 0;
	e = 0;

	while (s[l] != '\0')
		l++;

	while (a < l && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			c = c * 10 + d;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);

	return (c);
}
