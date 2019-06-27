#include "holberton.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{

	int a, b, c;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 0 && b <= 9)
			{
				c = ( b + '0');
			}
			else
			{
				c = ((b % 10) + '0');
				_putchar(b / 10 + '0');
			}
			_putchar(c);
		}
		_putchar(10);
	}
}
