#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{

  int m;

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				 {
				   m = 1;
				 }
  else
    {
      m = 0;
    }

  return(m);

}
