#include "main.h"

/**
 * print_triangle - Print a triangle of '#' characters
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size - row - 1; col++)
		{
			_putchar(' ');
		}
		for (col = 0; col < row + 1; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

