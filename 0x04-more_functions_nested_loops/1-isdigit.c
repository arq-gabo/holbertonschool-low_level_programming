#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int m;

	if ((c >= 'a' && c <= 'a') || (c >= 'A' && c <= 'Z'))
	{
		m = 0;
	}
	else
	{
		m = 1;
	}
	return (m);
}
