#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - entry point
 * @argc: contains the number of arguments that have been entered
 * @argv: array of pointers to characters
 * Return: Success or failure
 */

int main(int argc, char *argv[])
{
	unsigned int i, j, k = 0;

	unsigned int count = argc;

	for (i = 1; i < count; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		k += atoi(argv[i]);
	}
	printf("%u\n", k);
	return (0);
}
