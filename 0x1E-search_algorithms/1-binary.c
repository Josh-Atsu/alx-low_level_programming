#include "search_algos.h"

/**
 * binary_search - searches through the array
 * using binary search algorithm
 *
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for
 * Return: 1 or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, L, R, i;

	if (array == NULL)
		return (-1);
	L = 0;
	R = size - 1;
	if (L > R)
		return (-1);
	m = (L + R) / 2;
	while (L <= R)
	{
		printf("Searching for array: ");
		for (i = L; i < R + 1; i++)
		{
			printf("%d", array[i]);
			if (array[i] != array[R])
				printf(", ");
		}
		printf("\n");
		if (L > R)
			return (-1);
		m = (L + R) / 2;
		if (value < array[m])
			R = m - 1;
		else if (value > array[m])
			L = m + 1;
		else if (value == array[m])
			return (m);
	}
	return (-1);
}
