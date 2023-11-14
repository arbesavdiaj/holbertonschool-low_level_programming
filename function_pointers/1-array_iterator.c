#include <stddef.h>

/**
 * array_iterator - function that prints a name
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
