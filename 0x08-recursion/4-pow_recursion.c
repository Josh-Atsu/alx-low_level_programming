#include "main.h"

/**
 * _pow_recursion - find the value of a number raised to another number
 * @x: the number
 * @y: the power (number of times)
 *
 * Return: the exponent
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
