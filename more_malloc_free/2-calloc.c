#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements of the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 *         The memory is set to zero.
 *         If nmemb or size is 0, then _calloc returns NULL.
 *         If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}

