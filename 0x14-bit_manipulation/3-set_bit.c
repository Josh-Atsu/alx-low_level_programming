#include "main.h"

/**
 * set_bit - set a bit to 1 at index
 * @n: bit integer
 * @index: position
 * Return: the new bit operatoe
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int st;

	if (index > sizeof(size_t) * 8)
		return (-1);
	st = 1;
	st = st << index;
	return (((*n) | st));
}
