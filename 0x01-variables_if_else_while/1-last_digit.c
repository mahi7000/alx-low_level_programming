#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - function
 *
 * Return - 0 (success)
 */
int main(void)
{
	int n;
	int lastd = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	
	
	return (0);
}
