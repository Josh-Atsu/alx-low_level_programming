#include "main.h"

/*
 * print_binary - Convert all integers to binary
 * @n: the unsigned long integer
 * Return: the number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_actual_binary(n);
	}
}

void print_actual_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_actual_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
