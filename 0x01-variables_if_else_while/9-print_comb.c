#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
		else
		{

		}
	}

	putchar('\n');

	return (0);
}
