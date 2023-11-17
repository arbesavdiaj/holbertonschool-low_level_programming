#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char format_char;

	va_start(args, format);

	while ((format_char = format[i]) != '\0')
	{
		switch (format_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
		}
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(args);
}

