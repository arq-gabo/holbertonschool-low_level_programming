#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float n;
	char m;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
