#include "sort.h"

/**
 * selection_sort - sor array using algorithm of selection sort
 * @array: array to order
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{

	size_t i, index, min_index;
	int temp;

	if (array == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		min_index = i;
		for (index = i; index < size; index++)
		{
			if (array[index] < array[min_index])
			{
				min_index = index;
			}
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}

}
