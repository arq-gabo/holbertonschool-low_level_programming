#include "sort.h"

/**
 * bubble_sort - function to classify an array of integers in ascending order
 * @array: integers to be ordered
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{

	size_t i, n_size = size;
	int tmp, sort;

	while (n_size)
	{
		sort = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				sort = 0;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		if (sort == 1)
		{
			break;
		}
		n_size--;
	}
}
