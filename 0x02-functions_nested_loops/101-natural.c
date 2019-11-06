#include <stdio.h>

/**
 * main - function main
 * Return: zero
 */


int main(void)
{

	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);

	return (0);
}
