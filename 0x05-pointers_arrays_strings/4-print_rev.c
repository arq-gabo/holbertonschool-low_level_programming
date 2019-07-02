#include "holberton.h"

/**
 * print_rev - Function that prints a string in reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)

{

	int len = 0;

	while (1)
	{
		if (*(s + len) == '\0')
			break;
		len++;
	}

	while (len > 0)
	{
		len--;
		_putchar(*(s + len));
	}
	_putchar(10);
}
