#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in mem
 * @str: Literal String
 * Return: Return a pointer or return NULL if inneficient memory or str is NULL
 */

char *_strdup(char *str)
{

	int a, b;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		;
	}

	s = malloc(a * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (b = 0 ; b < a ; b++)
	{
		s[b] = str[b];
	}

	return (s);

}
