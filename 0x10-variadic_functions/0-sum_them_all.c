#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic function
 * @n: const unsigned int
 * @...: variable numbers
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);

	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	return (sum);

	va_end(nums);
}
