#include <stdio.h>

int main(void)
{

	int a, b, c, d;

	for(a = 48 ; a <= 57 ; a++)
	{
		for (b = 48 ; b <= 57 ; b++)
		{
			for (c = 48 ; c <= 57 ; c++)
			{
				for (d = 48 ; d <= 57 ; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return(0);
}
