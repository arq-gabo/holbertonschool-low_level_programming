#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}

	char m;

	for (m = 65; m <= 90; m++)
	{
		putchar(m);
	}

	putchar('\n');

	return (0);
}
