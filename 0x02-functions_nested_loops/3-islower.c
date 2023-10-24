#include "main.h"

/**
 * _islower - checks for lower case
 * @c: function parameter
 *
 * Return: 1 if true 0 if false
 */

int _islower(int c)
{
	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
