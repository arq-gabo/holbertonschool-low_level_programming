#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string source
 * Return: Always 0
 */

char *_strdup(char *str)
{

	int a, b;
	char *s;

	while (str == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; str[a] != '\0' ; a++)

	s = malloc(a * sizeof(char) + 1);

	for (b = 0 ; b <= a ; b++)
	{
		s[b] = str[b];
	}

	return (s);

}
