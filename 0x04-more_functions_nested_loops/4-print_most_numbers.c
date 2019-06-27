#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{

	int m;

	for (m = '0' ; m <= '9' ; m++)
	{
		if (m != '2' && m != '4')
		{
			_putchar(m);
		}

	}
	_putchar('\n');

}
