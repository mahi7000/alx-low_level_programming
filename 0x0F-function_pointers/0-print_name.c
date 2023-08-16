#include "function_pointers.h"

/**
 * print name - function
 * @name: string
 * f - function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
