#include "main.h"
#include <stddef.h>
/**
 * _strchr - shjfbsbf
 * @s: sjfbjef
 * @c: ejfnjeknf
 * Return: akhfgshbf
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return ("");
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
		return (NULL);
}
