#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index:  is the index
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)

{

	unsigned long int number = 1;
	int bit = 0;

	if (index > 64)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (bit);
	}

	number <<= index;

	if (number & n)
	{
		bit = 1;
	}

	return (bit);

}
