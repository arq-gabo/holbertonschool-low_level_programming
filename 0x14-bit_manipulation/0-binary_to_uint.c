#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int sum;

	if (b == NULL)
	{
		return (0);
	}

	for (sum = 0; *b; b++)
	{
		if (*b == '1')
		{
			sum = (sum << 1) | 1;
		}
		else if (*b == '0')
		{
			sum = sum << 1;
		}
		else
		{
			return (0);
		}
	}

	return (sum);

}
