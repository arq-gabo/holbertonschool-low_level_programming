#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *leet(char *s)
{

	char arr1[6] = {"AEOTL"};
	char arr2[6] = {"aeotl"};
	char arr3[6] = {"43071"};

	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0 ; b < 6 ; b++)
		{
			if (s[a] == arr1[b] || s[a] == arr2[b])
			{
				s[a] = arr3[b];
			}
		}
		a++;
	}
	return (s);
}
