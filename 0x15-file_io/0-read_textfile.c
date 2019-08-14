#include "holberton.h"

/**
 * read_textfile - reads a text file and prints.
 *@filename: name of the file to create.
 *@letters: is the number of letters it should read and print.
 * Return: 1 success, -1 failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int a1 = 0, lenght = 0, wri = 0;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	a1 = open(filename, O_RDONLY);
	if (a1 == -1)
	{
		return(0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(a1);
		free(buff);
		return(0);
	}

	lenght = read(a1, buff, letters);
	if (lenght == -1)
	{
		close(a1);
		free(buff);
		return(0);
	}

	wri = write(STDOUT_FILENO, buff, lenght);
	if (wri == -1)
	{
		close(a1);
		free(buff);
		return(0);
	}

	close(a1);
	free(buff);
	return(lenght);
}
