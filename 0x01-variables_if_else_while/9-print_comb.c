#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 57)
		{
		putchar(n);
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar(n);
		}
	}

	putchar('\n');

	return (0);
}
