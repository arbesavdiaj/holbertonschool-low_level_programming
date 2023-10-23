#include "main.h"

/**
 * rev_string - prints the string in reverse
 * @s: member
 * Return: 0
 */
void rev_string(char *s)
{
	int start, end, tmp;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
