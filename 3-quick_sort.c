#include "sort.h"
int lomuto(int *array, size_t size, int lo, int hi);
void real_sort(int *array, size_t size, int lo, int hi);
void swapper(int *i1, int *i2);

/**
 * quick_sort - Quick sorting algorithm
 * @array: Unsorted array
 * @size: Size of array
 * Return: Nothing, function is void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	real_sort(array, size, 0, size - 1);
}

/**
 * real_sort - The actual sorting function
 * @array: Array
 * @size: Size
 * @lo: Low index
 * @hi: High index
 * Return: nothing, function is void
 */
void real_sort(int *array, size_t size, int lo, int hi)
{
	int partition;

	if (lo < hi)
	{
		partition = lomuto(array, size, lo, hi);

		real_sort(array, size, lo, partition - 1);
		real_sort(array, size, partition + 1, hi);
	}
}

/**
 * swapper - Swap two addresses
 * @i1: Index 1
 * @i2: Index 2
 * Return: Nothing, function is void
 */
void swapper(int *i1, int *i2)
{
	int holder;

	holder = *i1;
	*i1 = *i2;
	*i2 = holder;
}
/**
 * lomuto - Lomuto partition
 * @array: Array
 * @size: Size of array
 * @lo: Low value
 * @hi: High value
 * Return: Nothing, function is void
 */
int lomuto(int *array, size_t size, int lo, int hi)
{
	int pivot, i = lo - 1, j;

	pivot = array[hi];

	for (j = lo; j < hi; j++)
	{
		if (pivot < array[j])
			continue;
		i++;
		swapper(&array[j], &array[i]);
		if (i != j)
			print_array(array, size);
	}

	swapper(&array[hi], &array[i + 1]);
	if (i + 1 != j)
		print_array(array, size);

	return (i + 1);
}
