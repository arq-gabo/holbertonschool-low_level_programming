#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
		if (n == 101 || n == 113)
		{

		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');

	return (0);
}
