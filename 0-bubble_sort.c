#include "sort.h"
void swapper(int *i1, int *i2);

/**
 * bubble_sort - Bubble sorting algorithm
 * @array: Unsorted array
 * @size: Size of array
 * Return: Nothing, function is void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swapper(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * swapper - Swap 2 addresses
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
