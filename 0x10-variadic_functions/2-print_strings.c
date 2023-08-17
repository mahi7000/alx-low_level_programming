#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - variadic function
 * @separator: separator
 * @n: const unsigned int
 * @...: variable arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;

	va_start(words, n);

	unsigned int i;
	char *word;

	for (i = 0; i < n; i++)
	{
		word = va_arg(words, char *);

		if (word == NULL)
			printf("nil");
		else if (i != (n - 1))
			printf("%s%s ", word, separator);
		else
			printf("%s", word);
	}
	printf("\n");

	va_end(words);
}
