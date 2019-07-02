#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		int a;

		a = *str;

		_putchar(a);
		str++;
	}
	_putchar('\n');
}
