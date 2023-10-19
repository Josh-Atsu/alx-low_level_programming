#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the number of elements in a array
 * @a: the elements of array
 * @n: specific element
 * Return: the number of element
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
