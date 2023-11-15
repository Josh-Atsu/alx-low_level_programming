#include "main.h"

/**
 * _puts_recursion - print out each character of a string
 * @s: thr string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
