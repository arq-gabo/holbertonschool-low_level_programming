#include "search_algos.h"

/**
 * linear_search - functionfind the value in a array integers
 * @array: pointer to firts position to array
 * @size: Number of element of array
 * @value: value to find
 * Return: return -1 value
 */

int linear_search(int *array, size_t size, int value)
{

	size_t a;

	if (!array)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}

	return (-1);

}
