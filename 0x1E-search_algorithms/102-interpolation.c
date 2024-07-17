#include "search_algos.h"

/**
 * interpolation_search - searches for a value using
 * interpolation search algorithm
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 * Return: value index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	if (value > array[high])
	{
		printf("Value checked array[2109] is out of range\n");
		return (-1);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	while (array[pos] != value)
	{
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] < value)
			low = pos + 1;
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
