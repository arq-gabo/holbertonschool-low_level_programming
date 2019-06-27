#include "holberton.h"
#include <stdio.h>

/**
 * _isupper character classification routines
 *
 * Return: Always 0.
 */

int _isupper(int c)
{

	int m;

	if (c >= 'A' && c <= 'Z')

	{

		m = 1;

	}

	else

	{

		m = 0;

	}

	return (m);

}
