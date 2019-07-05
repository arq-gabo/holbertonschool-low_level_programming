#include "holberton.h"

/**
 * rot13 - Function that encode a string using rot13
 * @s: String to be encoded
 * Return: Returned value
 */
char *rot13(char *s)
{
	char arr1[53] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char arr2[53] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0 ; b < 53 ; b++)
		{
			if (s[a] == arr1[b])
			{
				s[a] = arr2[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
