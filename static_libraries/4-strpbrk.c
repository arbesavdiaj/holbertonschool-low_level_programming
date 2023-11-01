#include "main.h"

/**
 * _strpbrk - jahefjb
 * @s: sjfjfhje
 * @accept: kajdfh
 * Return: return s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
			{
				return (s);
			}
	}
	return ('\0');
}
