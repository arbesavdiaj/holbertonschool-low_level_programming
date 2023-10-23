#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @s: member
 * Return: Always 0.
 */
void _puts(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
		_putchar('\n');
	}
	return (length);
}

