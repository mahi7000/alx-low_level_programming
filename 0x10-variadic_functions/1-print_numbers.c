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
	va_list nums;

	va_start(nums, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (i < (n - 1))
				printf("%d ", va_arg(nums, int));
			else
				printf("%d\n", va_arg(nums, int));
		}
		if (i < (n - 1))
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d\n", va_arg(nums, int));
	}

	va_end(nums);
}
