#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *@a:first pinter variable
 *@b:second pointer variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)

{

	int c;

	c = *b;
	*b = *a;
	*a = c;

}
