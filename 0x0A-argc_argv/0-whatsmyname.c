#include<stdio.h>
#include"holberton.h"

/**
 * main - entry point
 * @argc: contains the number of arguments that have been entered
 * @argv: array of pointers to characters
 * Return: Success or failure
 */

int main(int argc, char *argv[])

{

	printf("%s\n", argv[argc - 1]);

	return (0);
}
