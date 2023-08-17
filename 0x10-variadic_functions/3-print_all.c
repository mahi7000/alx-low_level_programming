#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function
 * @format: const string
 * @...: arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list any;

	va_start(any, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(any, int));
					break;

				case 'i':
					printf("%s%d", separator, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(any, double));
					break;
				case 's':
					str = va_arg(any, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(any);
}
