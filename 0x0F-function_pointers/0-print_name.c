#include <stdio.h>

/**
 * print_name - Function to print a name
 * @name: The name to print
 * @f: The function to use
 *
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);

}
