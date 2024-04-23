#include "main.h"

/**
 * clear_bit - set the bit at index to 1
 * @n: the bit numbers
 * @index: position
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if ((index > sizeof(size_t) * 8) || n == NULL)
		return (-1);

	set = 1;
	set =  set << index;
	if (((*n >> index) & 1) == 1)
		*n = *n ^ set;
	return (1);
}
