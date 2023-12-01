#include "3-calc.h"
/**
 * op_add - returns the addition of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: results
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: first number
 * @b: second number
 * Return: results
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of a and b
 * @a: first number
 * @b: second number
 * Return: results
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the results of a divided by b
 * @a: first number
 * @b: second number
 * Return: results
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the reminder after division of a by b
 * @a: numerator
 * @b: denominator
 * Return: results
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
