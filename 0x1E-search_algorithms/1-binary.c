#include "search_algos.h"

/**
 * binary_search - Function with find a value of array
 * @array: pointer to firts element of array
 * @size: elements of array
 * @value: value to find
 * Return: is array is NULL function return -1
 */
int binary_search(int *array, size_t size, int value)
{

	size_t first = 0, mid = 0, last = 0, a;

	if (!array || !size)
	{
		return (-1);
	}

	last = size - 1;

	while (first <= last)
	{
		printf("Searching in array: ");
		for (a = first; a < last; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[last]);
		mid = (first + last) / 2;

		if (array[mid] < value)
		{
			first = mid + 1;
		}
		else if (array[mid] > value)
		{
			last = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
