#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to print
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
