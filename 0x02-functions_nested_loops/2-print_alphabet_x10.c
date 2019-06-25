#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
void print_alphabet_x10(void)

{


	int m, n;

	n = 1;

	while (n <= 10)
		{

		for (m = 'a' ; m <= 'z' ; m++)
		{
			_putchar(m);
		}

		n++;
		_putchar(10);

	}

}
