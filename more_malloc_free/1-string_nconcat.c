#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n characters of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of characters from s2 to concatenate to s1.
 *
 * Return: Pointer to the newly allocated space in memory,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, i;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_str[len_s1 + i] = s2[i];

	concat_str[len_s1 + n] = '\0';

	return (concat_str);
}

