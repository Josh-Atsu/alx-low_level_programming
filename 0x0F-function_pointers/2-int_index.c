#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches through an array of integers
 * and prints the index of requirement
 * @array: the array of integers
 * @size: sizo of array
 * @cmp: the pointer to the function to be used to compare
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, check = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			/* ar1 = array[i], ar2 = array[j]; */
			cmp(array[i]);
			if (cmp(array[i]) == 1)
				return (i);
			check += 1;
		}
	}
	cmp(array[i + 1]);
	if (cmp(array[i + 1]) == 1)
		return (i + 1);
	if (check == 0)
		return (-1);
	return (-1);
}
