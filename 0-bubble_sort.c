#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int s;

	k = 1;

	for (i = size; i > 1; i--)
	{
		for (j = 0; j < size - k; j++)
		{
			if (array[j] > array[j + 1])
			{
				s = array[j];
				array[j] = array[j + 1];
				array[j + 1] = s;
				print_array(array, size);
			}
		}
		k++;
	}
	return;
}
