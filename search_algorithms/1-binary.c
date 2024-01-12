#include <stdio.h>

void print_array(int *array, size_t start, size_t end)
{
    printf("Searching in array: ");

    while (start < end) {
        printf("%d, ", array[start]);
        start++;
    }
    printf("%d\n", array[start]);
}

int binary_search(int *array, size_t size, int value)
{
    size_t start = 0;
    size_t end = size - 1;
    size_t mid;

	if (array == NULL) {
        return -1;
    }

    while (start <= end)
	{
        print_array(array, start, end);
        mid = start + (end - start) / 2;

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}
