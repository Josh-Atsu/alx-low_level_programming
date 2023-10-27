#include <unistd.h>

/**
 * _putchar - Prints only characters
 * @c: the character
 *
 * Return: the chracter
 */

int _putchar(char *c)
{
	return (write(1, &c, 1));
}
