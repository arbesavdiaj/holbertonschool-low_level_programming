#include <stddef.h>
/**
 * int_index - function
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	}

	return (-1);
}
