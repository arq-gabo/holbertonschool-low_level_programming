#include "holberton.h"

/**
 * puts2 - Function that prints one char out of 2 of a string
 * @str: String to be used
 */

void puts2(char *str)

{

	int a = 0, len = 0;

	while (str[len] != '\0')
	{

		len++;

	}

	for (a = 0 ; a < len ; a += 2)
	{

		_putchar(*(str + a));

	}
	_putchar(10);

}
