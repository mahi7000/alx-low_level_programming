#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list any;

	va_start(any, format);

	struct anything {
		char c;
		int i;
		float f;
		char *s;
	};
	int i;

	i = 0;



	printf("\n");

	va_end(any);
}
