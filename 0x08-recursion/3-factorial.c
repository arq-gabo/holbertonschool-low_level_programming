#include"holberton.h"

/**
 * factorial - Prints the factorial of a number
 * @n: number to the value
 * Return: factorial of a number
 */

int factorial(int n)
{

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
