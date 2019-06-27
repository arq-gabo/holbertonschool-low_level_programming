#include "holberton.h"

/**
 * print_diagonal - Function that draws a diagonal line
 * @n: Number of time the character
 */

void print_diagonal(int n)
{

		int a, b;

		if (n > 0)
		{
			for (a = 0 ; a < n ; a++)
			{
				for (b = 0 ; b < a ; b++)
				{
				_putchar(' ');
				}
				_putchar('\\');
				_putchar(10);
			}
		}
		else
		{
		_putchar(10);
		}
}
