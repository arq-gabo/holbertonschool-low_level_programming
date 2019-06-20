#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n, m;


	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}

	for (m = 65; m <= 90; m++)
	{
		putchar(m);
	}

	putchar(10);

	return (0);
}
