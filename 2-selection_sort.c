#include "sort.h"

/**
 * swap - Prints an array of integers
 *
 * @arr: The array to be printed
 * @i: index array
 * @j: index array
 */
void swap(int *arr, size_t *i, size_t *j)
{
	int temp;

	temp = arr[*i];
	arr[*i] = arr[*j];
	arr[*j] = temp;
}

/**
 * selection_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, j_min;

	for (i = 0; i < size - 1; i++)
	{
		j_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[j_min])
				j_min = j;
		}

		if (j_min != i)
		{
			swap(array, &i, &j_min);
			print_array(array, size);
		}
	}
}
