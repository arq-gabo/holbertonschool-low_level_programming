#include "holberton.h"


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int print_last_digit(int a)
{

	int b;

	if (a > 0)
	{
		b = (a % 10) + '0';
		_putchar(b);
	}
	else
	{
		b = ((a % 10) * -1) + '0';
		_putchar(b);
	}
	return (a);

}
