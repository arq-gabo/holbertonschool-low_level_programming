#include "holberton.h"

/**
 * puts_half - Function that prints half of a string
 * @str: String to be used
 */
void puts_half(char *str)
{

	int len = 0, a, hlf;

	while (str[len] != 0)
	{

		len++;

	}

	if (len % 2 == 0)
	{
		hlf = len / 2;

		for (a = hlf ; a < len ; a++)
		{
			_putchar(str[a]);

		}
	}

	else
	{
		hlf = (len - 1) / 2;

		for (a = len - hlf ; a < len ; a++)
		{
			_putchar(str[a]);

		}

	}

	_putchar(10);

}
