#include "holberton.h"

/**
 *
 *
 *
 *
 */


void print_diagonal(int n)

{
	int a, b;

	if(n > 0)
	{
		for(a = 0 ; a < n ; a++)
		{
			for(b = 0 ; b < a ; b++)
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