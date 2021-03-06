#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *@s:integer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (s[a - 1] == ' ' || s[a - 1] == '(')
			{
				s[a] = s[a] - 32;
			}
			if (s[a - 1] == 9 || s[a - 1] == '"' || s[a - 1] == ')')
			{
				s[a] = s[a] - 32;
			}
			if (s[a - 1] == '\n' || s[a - 1] == '?' || s[a - 1] == '{')
			{
				s[a] = s[a] - 32;
			}
			if (s[a - 1] == '.' || s[a - 1] == '!' || s[a - 1] == '}')
			{
				s[a] = s[a] - 32;
			}
			if (s[a - 1] == ',' || s[a - 1] == ';')
			{
				s[a] = s[a] - 32;
			}
			if (a == 0)
			{
				s[a] = s[a] - 32;
			}
		}
		a++;
	}
	return (s);
}
