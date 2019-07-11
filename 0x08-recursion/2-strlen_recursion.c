#include"holberton.h"

/**
 *_strlen_recursion - Function that returns the length of a string
 *@s : String to be valued
 *return - Factorial of a number
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
