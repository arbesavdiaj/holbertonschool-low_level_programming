#include <stdlib.h>

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
    void *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    char *temp_ptr = (char *)ptr;
    for (i = 0; i < (nmemb * size); i++)
        temp_ptr[i] = 0;

    return ptr;
}

