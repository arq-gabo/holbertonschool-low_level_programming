#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	int m;

	if (n > 0)
	{
		_putchar('+');
		m = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		m = 0;
	}
	else
	{
		_putchar('-');
		m = -1;
	}

	return (m);
}
