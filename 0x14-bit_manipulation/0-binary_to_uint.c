#include "main.h"

/**
 * binary_to_uint - Convert binary numbers to unsigned integers
 * @b: the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, j, sum, pow, base;

	pow = 1;
	base = 2;
	sum = 0, len = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len += 1;
	if (len == 1 && (b[0] == '1' || b[0] == '0'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
		{
			pow = pow * base;
		}
		sum = sum + (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
