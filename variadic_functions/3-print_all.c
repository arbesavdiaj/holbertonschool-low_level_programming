#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	int integer;
	float f;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				integer = va_arg(args, int);
				printf("%d", integer);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
				break;
		}
	}

	printf("\n");
	va_end(args);
}

