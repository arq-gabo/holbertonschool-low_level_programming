#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	long int a = 1, b = 2, c, count;

	printf("%li, %li, ", a, b);

	for (count = 0 ; count <= 50 ; count++)
	{
		if (count != 50)
		{
			c = a + b;
			printf("%li, ", c);
			a = b;
			b = c;
		}
		else
		{
			printf("%li", c);
		}

	}
	printf("\n");
	return (0);
}
