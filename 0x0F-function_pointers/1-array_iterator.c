#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function
 * parsed as a parametr on each elememt of an array
 * @array: contains the array of numbers
 * @size: size of the array
 * @action: function pointer
 * the points to the funtion to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || (*action) == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
