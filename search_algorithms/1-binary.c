#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: A pointer to the first element of the array to print
 * @start: The starting index of the subarray to print
 * @end: The ending index of the subarray to print
*/

void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start < end)
	{
		printf("%d, ", array[start]);
		start++;
	}
	printf("%d\n", array[start]);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located,
 * or -1 if value is not present in array or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (-1);
}
