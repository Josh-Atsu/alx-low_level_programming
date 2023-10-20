#include "main.h"

/**
 * reverse_array - Reverse the array
 * @a: func parameter 1
 * @n: func parameter 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
