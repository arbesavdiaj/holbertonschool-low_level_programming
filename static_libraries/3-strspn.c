#include "main.h"

/**
 * _strspn - dgfukhf
 * @s: svbfkjbv
 * @accept: kefbrejb
 * Return: sfhksjfhhk
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
	}
	return (count);
}
