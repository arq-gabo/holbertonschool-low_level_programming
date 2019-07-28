#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			if (!(a >= '0' && b <= a))
			{
				putchar (a);
				putchar (b);

				if (a != '8' || b != '9')
				{

				putchar(',');
				putchar(' ');
				}
				else
				{

				}
			}
			else
			{
			}
		}
	}
	putchar('\n');
	return (0);
}
