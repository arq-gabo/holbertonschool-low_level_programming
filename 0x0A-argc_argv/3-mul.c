#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - entry point
 * @argc: contains the number of arguments that have been entered
 * @argv: array of pointers to characters
 * Return: Success or failure
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
