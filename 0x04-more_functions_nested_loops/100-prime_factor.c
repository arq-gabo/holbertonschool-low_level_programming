#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{

	long int a, b;

	b = 612852475143;

	for (a = 2 ; a < b ; a++)
	{

		if (b % a == 0)
		{
			b /= a;
			a++;
		}

	}

	printf("%ld\n", a);

	return (0);

}
