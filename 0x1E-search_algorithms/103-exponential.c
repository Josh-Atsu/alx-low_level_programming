#include "search_algos.h"

/**
 * exponential_search - searches a sorted array using
 * exponential search algorithm
 *
 * @array: pointer to the first element
 * @size: number of alements in the array
 * @value: value to search for
 * Return: the value index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, m;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (array[i] <= value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	m = i;
	if (i >= size)
		m = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", (i / 2), m);
	return (binary_search_2(array, (i / 2), m, value));
}

/**
 * binary_search_2 - binary search on the sublist
 * @array: pointer to the first element
 * @L: lower index
 * @R: upper index of sublist
 * @value: value to search for
 * Return: the value index or -1
 */
int binary_search_2(int *array, size_t L, size_t R, int value)
{
	size_t i, m;

	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i < R + 1; i++)
		{
			printf(" %d", array[i]);
			if (array[i] != array[R])
				printf(",");
		}
		printf("\n");
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
