#include "holberton.h"
#include <stdio.h>

/**
 * Function calculates the length of the string
 *
 * Return: Always 0.
 */
int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
