#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return always void
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
	_putchar(m);
	}
	_putchar(10);

}
