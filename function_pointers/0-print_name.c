#include <stddef.h>
#ifndef PRINT_NAME
#define PRINT_NAME

/**
 * print_name - function that prints a name
 * @name: name
 * @f: f
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
#endif
