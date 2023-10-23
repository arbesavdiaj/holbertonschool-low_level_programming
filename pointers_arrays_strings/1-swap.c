#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: 98
 * @b: 42
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a	- *b;
	*a = *a - *b;
}
