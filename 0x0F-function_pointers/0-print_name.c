#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print the name contained in a function
 * @name: name to be printed
 * @f: function that contains the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
