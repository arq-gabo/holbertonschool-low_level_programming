#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates mamory isging malloc.
 * @b: integer from imput
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{

	int *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);

}
