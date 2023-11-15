#include "main.h"

/**
 * _strlen_recursion - check the number of characters in the string
 * @s: the string
 * Return: the lenth of the the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
