#include "sort.h"

/**
 * partition - function with segregates twice values to either side
 *             of the pivot, low values to the left, hight value to
 *             the right
 * @array: arrays of integers
 * @size: size of the arrays
 * @low: low index to the value to sorted
 * @high: high index to the value to sorted
 * Return: update array of pivot
 */

int partition(int *array, size_t size, int low, int high)
{
	int tmp, i;
	int pivot = array[high];
	int pdx = low - 1;

	for (i = low ; i < high ; i++)
	{
		if (array[i] < pivot)
		{
			pdx += 1;
			if (i != pdx)
			{
				tmp = array[i];
				array[i] = array[pdx];
				array[pdx] = tmp;
				print_array(array, size);
			}
		}
	}

	if (array[high] < array[pdx + 1])
	{
		tmp = array[pdx + 1];
		array[pdx + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (pdx + 1);
}

/**
 * qs_recurse - function recurse for use sorted values using quick sort
 * @array: arrays of integers
 * @size: size of arrays
 * @low: low index of the value to sorted
 * @high: high index of the value to sorted
 */

void qs_recurse(int *array, size_t size, int low, int high)
{
	int pdx;

	if (low >= high)
	{
		return;
	}
	pdx = partition(array, size, low, high);

	qs_recurse(array, size, low, pdx - 1);
	qs_recurse(array, size, pdx + 1, high);
}

/**
 * quick_sort - function for calle the recursive quick sort
 * @array: arrays of integers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}

	qs_recurse(array, size, 0, size - 1);
}
