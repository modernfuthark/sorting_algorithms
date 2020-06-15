#include "sort.h"

/**
 * selection_sort - Selection sorting algorithm
 * @array: Unsorted array
 * @size: Size of array
 * Return: Nothing, function is void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, subidx = 0;
	int swap = 0;

	for (i = 0; i < size - 1; i++)
	{
		subidx = i; /* First item in list should be sorted, move up 1 */
		for (j = subidx + 1; j < size; j++)
		{
			if (array[j] < array[subidx])
				subidx = j;
		}

		swap = array[subidx];
		array[subidx] = array[i];
		array[i] = swap;
		print_array(array, size);
	}
}
