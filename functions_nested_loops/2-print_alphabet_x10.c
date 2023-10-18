#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int b;

	for (b = 0; b < 10; b++)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar('\n');
	{
		_putchar(i);
	}
	}
}
