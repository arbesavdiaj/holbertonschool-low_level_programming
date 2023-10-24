#include "main.h"
#include <string.h>
/**
 * puts_half - prints a string
 * @str: entered value
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (int i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

