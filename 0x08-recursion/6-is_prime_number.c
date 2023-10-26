#include "main.h"

/**
 * is_prime_number - checks if a number is prime number
 * @n: the number
 *
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	return (is_aprime(n, 2));
}

/**
 * is_aprime - actual check
 * @x: the number
 * @y: the iteration
 *
 * Return: 1 or 0
 */

int is_aprime(int x, int y)
{
	if (x <= 1 || (x % y == 0 && x != y))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (is_aprime(x, y + 1));
}
