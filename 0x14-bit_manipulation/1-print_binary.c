#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{

	if (n > 0)

	{
		print_binary(n >> 1);
		printf("%lu", n & 1);
	}

}
