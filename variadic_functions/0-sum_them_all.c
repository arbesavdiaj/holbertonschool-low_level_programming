#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function
 * @n: n
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int result = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	return (result);
}
