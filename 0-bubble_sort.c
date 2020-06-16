#include "sort.h"

/**
 * bubble_sort - Bubble sorting algorithm
 * @array: Unsorted array
 * @size: Size of array
 * Return: Nothing, function is void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swappy = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swappy = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swappy;
			}
		}
		print_array(array, size);
	}
}
