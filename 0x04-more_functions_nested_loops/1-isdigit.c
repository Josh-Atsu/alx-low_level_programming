# include "main.h"

/**
 * _isdigit - function that checkes from 0 to 9
 * @c: function parameter
 * Return: 1 if number and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
