#include <stdio.h>
#include "main.h"
/**
 * sqrt_helper - a helper function to find the natural square root
 * @n: the number to find the square root of
 * @i: the current divisor to check
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}

