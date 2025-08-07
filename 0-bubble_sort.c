#include "sort.h"

/**
 * swap - Prints an array of integers
 *
 * @arr: The array to be printed
 * @i: index array
 * @j: index array
 */
void swap(int *arr, int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
					swap(array, j, j + 1);
			}
		}
}
