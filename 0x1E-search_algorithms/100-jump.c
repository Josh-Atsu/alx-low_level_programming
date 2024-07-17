#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in sorted array of integers
 * using jump search algorithm
 * @array: pointer to the  first array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: value index or -1 if failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, js;

	if (array == NULL)
		return (-1);
	js = sqrt(size);
	i = 0;
	j = js;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[j] >= value || j > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
				i, j);
			for (; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n",
					i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		i = j;
		j = j + js;
	}
	return (-1);
}
