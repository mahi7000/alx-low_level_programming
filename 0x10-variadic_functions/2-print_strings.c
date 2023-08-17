#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;

	va_start(words, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (va_arg(words, char *))
			va_arg(words, char *) = "nil";

		if (i < (n - 1))
			printf("%s%s ", va_arg(words, char *), separator);
		else
			printf("%s\n", va_arg(words, char *));
	}

	va_end(words);
}
