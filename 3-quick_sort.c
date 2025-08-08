#include "sort.h"

/**
 * partition - implements Lomuto partitioning
 * @array: array to partition
 * @min: lowest array index position
 * @max: highest array index position
 * Return: index position of pivot
 */
int partition(int *array, int min, int max)
{
	int idx, j, tmp, pivot;

	pivot = array[max];
	idx = min - 1;

	for (j = min; j < max; j++)
	{
		if (array[j] < pivot)
		{
			idx++;
			tmp = array[idx];
			array[idx] = array[j];
			array[j] = tmp;
		}
	}

	idx++;
	tmp = array[idx];
	array[idx] = array[max];
	array[max] = tmp;

	return (idx);
}

/**
 * quick_sort_rec - recursively sorts an array
 * @array: array to sort
 * @min: lowest array index position
 * @max: highest array index position
 * Return: none (void)
 */
void quick_sort_rec(int *array, int min, int max)
{
	int pivot;

	if (min >= max || min < 0)
		return;

	pivot = partition(array, min, max);

	quick_sort_rec(array, min, pivot - 1);
	quick_sort_rec(array, pivot + 1, max);

	print_array(array, (size_t)(max + 1));
}

/**
 * quick_sort - sorts array in ascending order
 * @array: array to sort
 * @size: size of the array
 * Return: none (void)
 */
void quick_sort(int *array, size_t size)
{
	int min = 0;
	int max = (int)size - 1;

	if (array == NULL || size <= 1)
		return;

	quick_sort_rec(array, min, max);
}
