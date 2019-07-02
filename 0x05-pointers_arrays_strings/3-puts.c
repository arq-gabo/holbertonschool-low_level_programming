#include "holberton.h"

/**
 * strlen - calculate the length of a string
 * 'str' − This is the C string to be written
 * _puts writes a string to stdout up to but not including the null character.
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
