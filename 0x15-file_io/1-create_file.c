#include "holberton.h"

/**
 * create_file - function that creates a file.
 *@filename: name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 success, -1 failure.
 */

int create_file(const char *filename, char *text_content)
{
	int a1, b;

	if (filename == NULL)
	{
		return (-1);
	}

	a1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		return (1);
	}

	if (a1 == -1)
	{
		return (-1);
	}

	while (text_content[b])
	{
		b++;
	}

	write(a1, text_content, b);
	close(a1);
	return (1);
}
