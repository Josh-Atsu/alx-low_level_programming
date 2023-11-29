#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for the integer
 * @array: contains the numbers
 * @size: size of array
 * @cmp: function pointer
 * that compares and evaluate the values
 * Return: int of requirement
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ans;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ans = cmp(array[i]);
		if (ans == 1)
			return (i);
	}
	return (-1);
}
