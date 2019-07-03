#include "holberton.h"

/**
 * rev_string - Function that prints reverse string
 * @s: String to be checked
 */
void rev_string(char *s)

{

	int a, b, tmp;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (a = 0 ; a < len - 1 ; a++)
	{
		for (b = a + 1 ; b > 0 ; b--)
		{
			tmp = *(s + b);
			*(s + b) = *(s + b - 1);
			*(s + b - 1) = tmp;
		}

	}

}
