#include "sort.h"
void swapper(int *i1, int *i2);

/**
 * selection_sort - Selection sorting algorithm
 * @array: Unsorted array
 * @size: Size of array
 * Return: Nothing, function is void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, subidx = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		subidx = i; /* First item in list should be sorted, move up 1 */
		for (j = subidx; j < size; j++)
		{
			if (array[j] < array[subidx])
				subidx = j;
		}

		if (array[subidx] < array[i])
		{
			swapper(&array[subidx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swapper - Swap two addresses
 * @i1: Index 1
 * @i2: index 2
 * Return: Nothing, function is void
 */
void swapper(int *i1, int *i2)
{
	int holder;

	holder = *i1;
	*i1 = *i2;
	*i2 = holder;
}
