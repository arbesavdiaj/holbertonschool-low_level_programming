#include "main.h"
#include <stdio.h>

/**
 * factorial - Write a function that returns the length of a string
 * @n: number to calculate the factorial of
 *
 * Return: factorial of the number, or -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
