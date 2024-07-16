#include "search_algos.h"

/**
 * linear_search - searches through a list of array linearly
 * @array: the array to search
 * @size: size of array
 * @value: value to search for
 * Return: 1 if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (1);
	}
	return (-1);
}
