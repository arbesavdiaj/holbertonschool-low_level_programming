#include "main.h"

/**
 * _strncat - suifhduihf
 * @dest: fbdbj
 * @src: duhskuhfi
 * @n: dufhrukfh
 * Return: returns destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j]  != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
