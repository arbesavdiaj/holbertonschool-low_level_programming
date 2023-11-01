#include "main.h"

/**
 * _isdigit - check for uppercase characters
 * @c: check character
 * Return:1 for uppercase and 0 for lowercase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
