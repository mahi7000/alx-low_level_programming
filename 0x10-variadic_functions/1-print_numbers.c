#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic function
 * @separator: separator
 * @n: const unsigned int
 * @...: nums
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);

		printf("%d", num);

		if (i < (n - 1) && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");

	va_end(nums);
}
