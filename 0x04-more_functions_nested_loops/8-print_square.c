#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *@size:character
 * Return: Always 0.
 */
void print_square(int size)
{

	int a, b;

	for (a = 1 ; a <= size ; a++)
	{
		for (b = 1 ; b <= size ; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
