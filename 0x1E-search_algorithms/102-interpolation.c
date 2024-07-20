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
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] < value)
			low = pos + 1;
	}
	if (low <= high)
		printf("Value checked array[%ld] is out of range\n", low);
	return (-1);
}
