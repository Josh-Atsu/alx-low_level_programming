#include "main.h"

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number
 * Return: the natural square root or 1- if false
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_func(2, n));
}

/**
 * sqrt_func - does the actual ccalculation
 * @x: the number corresponding to the natural number
 * @n: the number to check
 * Return: -1 or the number x
 */
int sqrt_func(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x < (n / 2))
		return (sqrt_func(++x, n));
	else
		return (-1);
}
