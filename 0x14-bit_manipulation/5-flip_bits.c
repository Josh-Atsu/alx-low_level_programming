#include "main.h"

/**
 * flip_bits - a function that counts the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: first  number to compare
 * @m: second number to compare
 * Return: the number of counts
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count;

	result = m ^ n;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
