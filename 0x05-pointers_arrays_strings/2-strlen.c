#include "holberton.h"
#include <stdio.h>

/**
 * Function calculates the length of the string
 *
 * Return: Always 0.
 */

int main(void)

{

	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);

}
