#include <stdio.h>

/**
 * _isalpha - Check for alphabetic character
 * @c: the ascii character
 *
 * Return: 1 if alphabet, else 0.
 */

int _isalpha(int c)
{
	if (c >= 'A')
	{
		return (1);
	}
	return (0);
}
