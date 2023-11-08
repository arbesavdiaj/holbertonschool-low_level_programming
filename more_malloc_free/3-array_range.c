#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: Pointer to the newly created array.
 *         If min > max, return NULL.
 *         If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int i, l;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	array = malloc(l * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		array[i] = min++;
	}
	return (array);
}
