#include "main.h"

/**
 * get_bit - get the value at an index
 * @n: the bit integer
 * @index: position
 * Return: the value of that integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (x = 0; x < index; x++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
