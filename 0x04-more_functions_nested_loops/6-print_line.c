#include "holberton.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: number of times of _
 */

void print_line(int n)
{
	int a;

	for (a = 0; a <= n ; a++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
	_putchar(10);
}
