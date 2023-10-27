#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @n: the number
 *
 * Return: the positive number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
