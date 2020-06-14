#include "sort.h"

/**
 * sorting_verifyer - Confirm if an array is sorted
 * @array: Array
 * @size: Size of array
 * Return: 1 if array  isnt sorted, 0 if it is
 */
int sorting_verifyer(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		if (i != size - 2)
			if (array[i] > array[i + 1])
			{
				printf("\u274C ARRAY IS NOT SORTED\n");
				printf("-----\nError at array[%lu] & [%lu]: %d, %d\n", i, (i + 1), array[i], array[i + 1]);
				return (1);
			}
	}
	printf("\u2728 ARRAY IS SORTED!\n");
	return (0);
}
