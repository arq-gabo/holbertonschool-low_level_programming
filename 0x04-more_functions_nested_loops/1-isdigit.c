#include "holberton.h"
#include <stdio.h>

/**
*_isdigit - Function that checks for a digit character
*@c: Number to be checked
*Return: 1 if c is a digit and 0 otherwise
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
