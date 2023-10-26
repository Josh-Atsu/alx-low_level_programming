#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_asqrt(n, 0));
}

/**
 * _asqrt - return the natural square root
 * @x: the number
 * @y: the iteration
 *
 * Return: the square root
 */

int _asqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_asqrt(x, y + 1));
}
