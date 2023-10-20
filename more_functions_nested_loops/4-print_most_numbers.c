#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: numbers from 1 to 9 without 2 and 4
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n + 48);
		}
	}
	_putchar('\n');
}
