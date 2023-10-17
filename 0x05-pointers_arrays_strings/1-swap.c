#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: the first integer
 * @b: the second interger
 * Retern: Bothe a and b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
