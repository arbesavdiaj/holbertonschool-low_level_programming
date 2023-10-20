#include "main.h"

/**
 * more_numbers - prints the numbers
 * Return: numbers from 0 to 14 followed by a new line
 */
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar(m / 10 + '0');
			}
				_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
