#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - loop through the array and print each member
 * @array: the array of integers
 * @size: size of array
 * @action: pointer to the function that needs to be used
 *
 * Return: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == 0 || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
