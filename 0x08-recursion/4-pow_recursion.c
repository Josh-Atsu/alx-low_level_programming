#include "main.h"

/**
 * _pow_recursion - calculate the number raised to another number
 * @x: the number
 * @y: the power
 * Return: the calculated power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
