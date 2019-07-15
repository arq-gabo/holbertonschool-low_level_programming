#include"holberton.h"
#include<stdio.h>

/**
 * main - entry point
 * @argc: contains the number of arguments that have been entered
 * @argv: array of pointers to characters
 * Return: Success or failure
 */

int main(int argc, char *argv[])
{

	int a;

	for (a = 0 ; a < argc ; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);

}
