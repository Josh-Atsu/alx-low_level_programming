#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @n: the number
 * Return: the 1 if true and 0 if false
 */
int is_prime_number(int n)
{
	/* base case 1 */
	if (n < 2)
		return (0);
	return (is_actual_prime(n, 2));
}

/**
 * is_actual_prime - compares numbers
 * @x: check number
 * @n: the number
 * Return: the appropraite value
 */
int is_actual_prime(int n, int x)
{
	if (n % x == 0 && n != x)
		return (0);
	else if (n == x)
		return (1);
	return (is_actual_prime(n, ++x));
}
