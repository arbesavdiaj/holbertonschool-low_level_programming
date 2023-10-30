#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Write a function that prints a string
 * @s: string
 */

int _strlen_recursion(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + _strlen_recursion(str + 1);
	}
}
